class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr;
        vector<int>arr2;
        arr.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i = 2;i<nums.size();i++){
            if(arr.back()>arr2.back()){
                arr.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }

        arr.insert(arr.end(),arr2.begin(),arr2.end());
        return arr;
    }
};