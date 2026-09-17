class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int INF = 1e9;

        vector<int> best(n, INF);

        int sum = 0;
        int l = 0;
        int ans = INF;
        int bestLen = INF;

        for (int r = 0; r < n; r++) {
            sum += arr[r];

            while (sum > target) {
                sum -= arr[l];
                l++;
            }

            if (sum == target) {
                int len = r - l + 1;

                
                if (l > 0 && best[l - 1] != INF) {
                    ans = min(ans, len + best[l - 1]);
                }

                
                bestLen = min(bestLen, len);
            }

            best[r] = bestLen;
        }

        return ans == INF ? -1 : ans;
    }
};