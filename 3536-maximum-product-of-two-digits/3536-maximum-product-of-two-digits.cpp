class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        sort(num.rbegin(),num.rend());
        // int x = nums.size();
        int ans = (num[0]-'0')*(num[1]-'0');
        return ans;
    }
};