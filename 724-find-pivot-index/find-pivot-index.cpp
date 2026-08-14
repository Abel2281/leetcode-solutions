class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> prefix(n+1);
        prefix[0]=nums[0];
        for(int i=1; i<=n; i++){
            prefix[i] = prefix[i-1]+nums[i];
        }
        int i=0;
        while(i<=n){
            int left = (i == 0) ? 0 : prefix[i - 1];
            int right = prefix[n] - prefix[i];
            if(left == right)
                return i;
            i++;
        }
        return -1;
        
    }
};