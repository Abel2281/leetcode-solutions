class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> prefix(n+1,0);
        prefix[0]=nums[0];
        for(int i=1; i<=n; i++){
            prefix[i] = prefix[i-1]+nums[i];
        }
        int i=0;
        vector<int> ans;
        while(i<=n){
            if(i==0){
                if(prefix[n]-prefix[i]==0) ans.push_back(0);
                i++;
                continue;
            }
            if(prefix[i-1]==(prefix[n]-prefix[i])) ans.push_back(i);
            i++;
        }
        if(ans.empty()) return -1;
        else return ans[0];
        
    }
};