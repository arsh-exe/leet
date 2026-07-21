class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()<=1){
            return nums;
        }
        vector<int>ans;
        vector<int>odd;
        vector<int>even;
        for(int i= 0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);

            }
        }
        for(int i = 0;i<even.size();i++){
            ans.push_back(even[i]);
        }
        for(int i = 0;i<odd.size();i++){
            ans.push_back(odd[i]);
        }
        return ans;

    }
};