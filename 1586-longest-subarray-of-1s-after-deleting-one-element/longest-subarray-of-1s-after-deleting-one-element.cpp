class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0, r=0, z=0, max_count=0;
        while(r<nums.size()){
            if(nums[r]==0) z++;
            if(z>1){
                if(nums[l]==0) z--;
                l++;
            }
            max_count = max(max_count,r-l+1);
            r++;
        }
        return max_count-1;
    }
};