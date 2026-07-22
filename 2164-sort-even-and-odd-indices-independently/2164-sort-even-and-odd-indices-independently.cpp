class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        // int n =  nums.size();
        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int o = 1,e=0;
        int idx1 = 0,idx2 = 0;
        for(int i = 0 ;i<even.size()+odd.size();i++){
            if(i == e){
                ans.push_back(even[idx1++]);
                e+=2;
            }
            else if(i == o){
                ans.push_back(odd[idx2++]);
                o+=2;
            }
        }
        return ans;
    }
};