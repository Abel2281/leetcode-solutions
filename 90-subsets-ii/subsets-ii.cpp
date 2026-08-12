class Solution {
public:
    void getAllSubsets(vector<int>& nums,vector<int>& arr,int ind,vector<vector<int>> &result){
        if(ind==nums.size()){
            result.push_back(arr);
            return;
        }

        arr.push_back(nums[ind]);
        getAllSubsets(nums,arr,ind+1,result);
        arr.pop_back();
        int i=ind+1;
        while(i<nums.size() && nums[i]==nums[i-1]) i++;
        getAllSubsets(nums,arr,i,result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> arr;
        sort(nums.begin(),nums.end());
        getAllSubsets(nums,arr,0,result);

        return result;
    }
};