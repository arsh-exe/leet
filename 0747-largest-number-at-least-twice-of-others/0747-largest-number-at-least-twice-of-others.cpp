class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        int f = find(nums.begin(), nums.end(), mx) - nums.begin();
        for(int i = 0;i<nums.size();i++){
            if(mx == nums[i]){
                continue;
            }
            if(mx< (2 * nums[i])){
                f = -1;
            }
        }
        return f;
    }
};