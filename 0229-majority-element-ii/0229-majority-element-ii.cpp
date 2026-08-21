class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a = n/3;
        unordered_map<int,int>mp;
        for(int x: nums){
            mp[x]++;
        }
        vector<int>mx;
        for(auto it : mp){
            if(it.second>a){
                mx.push_back(it.first);
            }
        }
        return mx;
    }
};