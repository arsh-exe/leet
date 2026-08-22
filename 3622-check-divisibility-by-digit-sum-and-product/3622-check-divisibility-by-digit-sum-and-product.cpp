class Solution {
public:
    bool checkDivisibility(int n) {
     int temp = n;
    //  vector<int>nums;
     int sum = 0;
     int s = 0;
     int m = 1;
     while(temp){
        int rem = temp%10;
        s+=rem;
        m*=rem;
        temp /=10;
     }
     sum = s+m;
     return (n%sum==0);
    }
};