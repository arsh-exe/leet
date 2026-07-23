class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>temp(nums);
        sort(temp.begin(),temp.end());
        int n = nums.size();
        int l = (n-1)/2;
        int r = n-1;
        for(int i = 0;i<n;i++){
            if(i%2==0){
                nums[i] = temp[l--];
            }
            else{
                nums[i] = temp[r--];
            }
        }

    }
};