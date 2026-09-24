class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int s  = 0;
        for(int i = 0;i<nums.size();i++){
            int x = nums[i];
            s = 0;
            while(x>0){
                int r = x%10;
                s +=r;
                x/=10;
            }
            if(s == i){
                return i;
            }
        }
        return -1;
    }
};