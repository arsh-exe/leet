class Solution {
public:
    int check(string s,int i,int j){
        int c = 0;
        while(i>=0&&j<s.length() && s[i]==s[j]){

            c++;
            i--;
            j++;
        }
        return  c;
    }
  int countSubstrings(string s) {
        int t = 0;
        for(int i = 0;i<s.length();i++){
            int odd  = check(s,i,i);
            int even  = check(s,i,i+1);
            t = t+odd+even;
        }
        return t;
    }
};