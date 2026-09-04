class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>pre;
        vector<int>post = nums;
        
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            pre.push_back(nums[i]);
            mx = *max_element(pre.begin(),pre.end());
            mn = *min_element(post.begin(),post.end());
            if(mx-mn<=k){
                return i;
            }
            post.erase(post.begin());

        }
        return -1;
    }
};