class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(char ch: word)
            freq[ch-'a']++;
        sort(freq.begin(),freq.end());
        int mini = 0;
        for(int i = 25,pushCnt = 0;i>=0;i--){
            int currIdx = 25-i;
            if(currIdx %8 == 0)
                pushCnt++;
            mini +=freq[i]*pushCnt;

        }
        return mini;
    }
};