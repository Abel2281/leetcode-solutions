class Solution {
public:
    void makeSubset(vector<int>& nums,vector<int> &arr, vector<vector<int>> &result, int ind){
        if(ind==nums.size()){
            result.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        makeSubset(nums,arr,result,ind+1);
        arr.pop_back();
        makeSubset(nums,arr,result,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
        vector<vector<int>> result;
        makeSubset(nums,arr,result,0);
        return result;
    }
};