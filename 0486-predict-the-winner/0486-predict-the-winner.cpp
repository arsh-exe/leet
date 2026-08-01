class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        if(n%2==0) return true;
        vector<int>temp(nums);
        for(int i = n-2;i>=0;--i){
            for(int j = i+1;j<n;j++){
                temp[j] = max(nums[i]-temp[j],nums[j]-temp[j-1]);
            }
        }
        return temp[n-1]>=0;
    }
};