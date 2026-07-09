class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int c = 1;
        int mx = 1;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]== nums[i+1]){
                continue;
            }
            if(nums[i]+1 == nums[i+1]){
                c++;
                 mx = max(mx,c);
            }
            else{
                c = 1;
            }
        }
        return mx;
    }
};