class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int mx =INT_MIN;
        int cols = matrix[0].size();
        if(rows == 1&&cols==1&&matrix[0][0]==1){
            return 0;
        }

        for(int left = 0;left<cols;left++){
            vector<int>rowsum(rows,0);
            for(int right = left ;right<cols;right++){
                for(int row = 0;row <rows;row++){
                    rowsum[row]+=matrix[row][right];
                }
                // auto it  = max_element(rowsum.begin(),rowsum.end());
                // if(*it<=k){
                // mx = max(mx,*it);
                for(int i = 0;i<rows;i++){
                    int sum = 0;
                    for (int j = i; j < rows; j++) {
                    sum += rowsum[j];
                    if (sum <= k) {
                    mx = max(mx, sum);
                        }
                        }
                    }
                }
        }

        return mx;
    }
};