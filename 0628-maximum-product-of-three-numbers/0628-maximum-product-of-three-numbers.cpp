class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int n = nums.size();
        int ans1 = nums[0]*nums[1]*nums[2];
        int ans2 = nums[0]*nums[n-1]*nums[n-2];
        int ans = max(ans1,ans2);

        return ans;
    }
};