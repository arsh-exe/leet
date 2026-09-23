class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int t = 0;
        for(int n: nums){
            t+=n;
        }
        int target = t-x;
        if(target<0) return -1;
        if(target==0) return nums.size();
        int l = 0;
        int s =0;
        int mx = -1;
        for(int r = 0;r<nums.size();r++){
            s+=nums[r];
            while(s>target){
                s-=nums[l];
                l++;
            }
            if(s== target){
                mx = max(mx,r-l+1);
            }
        }
        if(mx ==-1) return -1;
        return nums.size()-mx;



    }
};