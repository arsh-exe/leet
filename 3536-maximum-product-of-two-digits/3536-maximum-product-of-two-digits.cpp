class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        vector<int>nums;
        for(int i = 0;i<num.size();i++){
            int  x = num[i] - '0';
            nums.push_back(x);
        }
        sort(nums.rbegin(),nums.rend());
        int x = nums.size();
        int ans = nums[0]*nums[1];
        return ans;
    }
};