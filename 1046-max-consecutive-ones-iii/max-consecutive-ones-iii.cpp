class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, max_count = 0, zeroes = 0;
        for(int right=0; right<nums.size(); right++){
            if(nums[right]==0) zeroes++;
            while(zeroes>k){
                if(nums[left]==0) zeroes--;
                left++;
            }
            max_count = max(max_count,right-left+1);
        }
        return max_count;
    }
};