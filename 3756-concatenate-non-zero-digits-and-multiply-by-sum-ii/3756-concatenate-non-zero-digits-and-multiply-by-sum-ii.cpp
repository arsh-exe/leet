class Solution {
public:
    static constexpr int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.size();

        vector<int> sum(n + 1, 0);
        vector<int> cnt(n + 1, 0);
        vector<long long> pref(n + 1, 0);

        vector<long long> pow10(n + 1);
        pow10[0] = 1;

        for (int i = 1; i <= n; i++)
            pow10[i] = (pow10[i - 1] * 10) % MOD;

        for (int i = 0; i < n; i++) {

            int d = s[i] - '0';

            sum[i + 1] = sum[i] + d;
            cnt[i + 1] = cnt[i];
            pref[i + 1] = pref[i];

            if (d != 0) {
                cnt[i + 1]++;
                pref[i + 1] = (pref[i] * 10 + d) % MOD;
            }
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0];
            int r = q[1] + 1;

            int len = cnt[r] - cnt[l];

            long long x =
                (pref[r] -
                 pref[l] * pow10[len] % MOD +
                 MOD) % MOD;

            long long digitSum =
                sum[r] - sum[l];

            ans.push_back((x * digitSum) % MOD);
        }

        return ans;
    }
};