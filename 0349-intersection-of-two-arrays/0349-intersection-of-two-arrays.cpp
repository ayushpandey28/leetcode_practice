class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        for(int x:nums1){
            s1.insert(x);
        }
        for(int x:nums2){
            s2.insert(x);
        }
        vector<int>ans;
        for(int y:s1){
            if(s2.find(y)!=s2.end()){
                ans.push_back(y);
            }
        }
        return ans;
    }
};