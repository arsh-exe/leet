class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        vector<int>ans;
        int i = nums[0];
        int x = 0;
        while(i<mx||x>=nums.size()){
              if (x < nums.size() && nums[x] == i) {
                x++;
            } else {
            ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};