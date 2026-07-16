class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // int n = nums.size();
        // vector<int>pre;
        // vector<int>suf;
        // for(int i =1;i<nums.size();i++){
        //     pre.push_back(min(nums[0],nums[i]));
        // }
        // for(int i =nums.size()-2;i>=0;i--){
        //     suf.push_back(min(nums[n-1],nums[i]));

        // }
        // vector<int> ans;
        // for(int i = 0;i<pre.size();i++){
        //     ans.push_back(pre[i]+suf[i]);
        // }
        // sort(ans.begin(),ans.end());
        // int anns= ans[ans.size()-1];
        // return anns;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i =0;i<nums.size();i+=2){
            ans+=nums[i];
        }
        return ans;

        

    }
};