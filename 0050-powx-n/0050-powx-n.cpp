class Solution {
public:
    double myPow(double x, int n) {
        double ans = pow(x,n);
        return ans;
        // if(n == 0) return 1;
        // if(n<0) return 1/myPow(x,-n);
        // return x*myPow(x,n-1);

    }
};
// class Solution {
// public:
//     double power(double x, long long n) {
//         if (n == 0)
//             return 1;

//         double half = power(x, n / 2);

//         if (n % 2 == 0)
//             return half * half;

//         return x * half * half;
//     }

//     double myPow(double x, int n) {
//         long long N = n;

//         if (N < 0) {
//             x = 1 / x;
//             N = -N;
//         }

//         return power(x, N);
//     }
// };