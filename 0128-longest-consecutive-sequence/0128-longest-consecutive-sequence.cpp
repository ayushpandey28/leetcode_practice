class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count = 0;
        int longest = 0;
        if(n==0){
            return 0;
        }
        for(int i=0;i<n-1;i++) {
            if(nums[i] == nums[i+1]) {
                continue;
            }
            if(nums[i]+1==nums[i+1]) {
                count++;
            }else {
                count=0;
            }
            longest=max(longest,count);
        }
        return longest+1;
    }
};