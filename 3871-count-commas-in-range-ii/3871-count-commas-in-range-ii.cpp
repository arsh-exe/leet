class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999) return 0;
        long long tc=0;
        long long s = 1000;
        long long e = s* 1000-1;
        int comma = 1;
        while(s<=n){
            long long num = (min(n,e)-s+1);
            tc += 1LL * comma * num;
            if(e>n) break;
            s = s*1000;
            e = s*1000-1;
            comma++;
        }
        return tc;



    }
};