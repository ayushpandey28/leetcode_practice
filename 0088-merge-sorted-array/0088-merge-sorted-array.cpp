class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        for(int x:nums2){
            nums1.push_back(x);
        }
        sort(nums1.begin(),nums1.end());
    }
};