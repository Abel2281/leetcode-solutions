class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, max_count = 0, zeroes = 0, right = 0;
        while(right<nums.size()){
            if(nums[right]==0) zeroes++;
            if(zeroes>k){
                if(nums[left]==0) zeroes--;
                left++;
            }
            max_count = max(max_count,right-left+1);
            right++;
        }
        return max_count;
    }
};