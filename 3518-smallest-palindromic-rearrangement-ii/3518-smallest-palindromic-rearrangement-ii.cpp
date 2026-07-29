class Solution {
public:
    long long nCr(int n, int r, long long k) {
        r = min(r, n - r);
        long long res = 1;
        for (int i = 1; i <= r; i++) {
            res = res * (n - r + i) / i;
            if (res >= k) {
                return k;
            }
        }
        return res;
    }

    string smallestPalindrome(string s, int k) {
        int n = s.size();

        
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

       
        int oddCount = 0, oddChar = -1;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                oddCount++;
                oddChar = i;
            }
        }

        
        if ((n % 2 == 0 && oddCount != 0) || (n % 2 == 1 && oddCount != 1)) {
            return "";
        }

        char mid = (n % 2 == 1) ? char('a' + oddChar) : '\0';

        
        vector<int> count(26, 0);
        for (int i = 0; i < 26; i++) {
            count[i] = freq[i] / 2;
        }

        string halfres = "";
        int half = n / 2;
        long long kk = k; 

        for (int i = 0; i < half; i++) {
            bool placed = false;
            for (int j = 0; j < 26; j++) {
                if (count[j] > 0) {
                    count[j] -= 1;
                    long long ways = 1;
                    int letters = 0;
                    for (int c = 0; c < 26; c++) {
                        letters += count[c];
                    }
                    for (int c = 0; c < 26; c++) {
                        if (count[c] > 0) {
                            ways *= nCr(letters, count[c], kk);
                            letters -= count[c];
                        }
                        if (ways >= kk) {
                            break;
                        }
                    }

                    if (ways >= kk) {
                        halfres.push_back(j + 'a');
                        placed = true;
                        break;
                    } else {
                        kk -= ways;
                        count[j] += 1;
                    }
                }
            }

            
            if (!placed) {
                return "";
            }
        }

        string rev = halfres;
        reverse(rev.begin(), rev.end());

        if (n % 2 == 1) {
            halfres.push_back(mid);
        }

        return halfres + rev;
    }
};