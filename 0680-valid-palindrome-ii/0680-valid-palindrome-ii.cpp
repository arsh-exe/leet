class Solution {

public:
    bool check(string s,int i ,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
            i++;
            j--;

            }
        }
        return true;
    }
    bool validPalindrome(string s) {
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            bool ans = check(s,i+1,j);
            bool ans2 =  check(s,i,j-1);
            return ans||ans2;
        }
    }
    return true;
   
    }
};