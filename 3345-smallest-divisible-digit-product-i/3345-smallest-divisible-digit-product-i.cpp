class Solution {
public:
    int prodofdig(int n){
        int prod = 1;
        int temp = n;
        while(temp>0){
            int r = temp%10;
            prod*=r;
            temp/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(prodofdig(n)%t!=0){
            n++;
        }
        return n;
    }
};