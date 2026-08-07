class Solution {
public:
    bool canWinNim(int n) {
        if(n==0||n==1||n==3){
            return true;
        }
        return n%4;
    }
};