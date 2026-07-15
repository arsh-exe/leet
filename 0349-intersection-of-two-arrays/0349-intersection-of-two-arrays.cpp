class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>joint;
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    joint.push_back(nums1[i]);
                }
            }
        }
        unordered_set<int>st(joint.begin(),joint.end());
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};