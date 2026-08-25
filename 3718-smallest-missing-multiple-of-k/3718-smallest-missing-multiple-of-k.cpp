class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end());
     int li = k;
     for(int x : nums ){

        if(x==li){
            li+=k;
        }

     }
     return li;
    }
};