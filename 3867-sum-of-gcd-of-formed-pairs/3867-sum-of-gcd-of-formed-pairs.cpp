class Solution {
public:
    long long gcdSum(vector<int>& nums) {
     vector<int>prefGCD(nums.size());
     int mx = 0;
     for(int i = 0;i<nums.size();i++){
        mx = max(mx,nums[i]);
        prefGCD[i] = gcd(nums[i],mx);

     }
     sort(prefGCD.begin(),prefGCD.end());
     long long ans = 0;
     for(int i = 0;i<nums.size()/2;i++){
        ans += gcd(prefGCD[i],prefGCD[nums.size()-1-i]);
     }
     return ans;

    }
};