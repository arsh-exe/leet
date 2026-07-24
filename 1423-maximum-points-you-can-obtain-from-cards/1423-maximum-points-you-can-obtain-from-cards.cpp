class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i = 0;
        int s= 0;
        for(int x:cardPoints){
            if(i<k){
            s+=x;
            }
            i++;
        }
        int mx = s;
        int n = cardPoints.size();
        for(int i = k-1, j=n-1;i>=0;i--,j--){
            s -= cardPoints[i];
            s += cardPoints[j];
            mx= max(mx,s);
        }
        return mx;
    }
};