class Solution {
public:
    int largestInteger(int num) {
        string s= to_string(num);
        vector<int>nums;
        for(char c:s){
            nums.push_back(c - '0');
        }
        vector<int>odd;
        vector<int>even;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        vector<int>res=nums;
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end(),greater<int>());
        int idx1 = 0;
        int idx2 = 0;
        for(int i =0;i<odd.size()+even.size();i++){
            if(res[i]%2==0){
                res[i] = even[idx1++];
            }
            else{
                res[i] = odd[idx2++];
            }
        }
        int number = 0;

        for (int digit : res) {
        number = number * 10 + digit;
        }        
        return number;

        

    }
};