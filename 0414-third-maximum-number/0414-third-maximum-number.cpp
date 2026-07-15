class Solution {
public:
    int thirdMax(vector<int>& nums) {
     unordered_set<int>st (nums.begin(),nums.end());
     vector<int> ans(st.begin(),st.end());
     sort(ans.begin(),ans.end(),greater<int>());
     if(ans.size()<3){
        return ans[0];
     }
     return ans[2];
    }
};