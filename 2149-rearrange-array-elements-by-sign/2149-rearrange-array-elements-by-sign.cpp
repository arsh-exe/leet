class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
     vector<int> res(n,0);
     int po = 0,ne=1;
     for(int i = 0;i<n;i++){
        if(nums[i]>0){
            res[po] = nums[i];
            po+=2;
        }
        else{
            res[ne] = nums[i];
            ne+=2;
        }
     }
    return res;
    }

};