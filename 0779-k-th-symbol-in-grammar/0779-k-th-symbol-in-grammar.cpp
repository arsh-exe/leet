class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        int h = 1 << (n-2);
        if(k<=h){
                return kthGrammar(n-1,k);
            
           
        }
        
            return 1-(kthGrammar(n-1,k-h));

        
    }
};