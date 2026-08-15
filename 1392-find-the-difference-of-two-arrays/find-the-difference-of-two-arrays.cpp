class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq1, freq2;
        int n = nums1.size();
        for(int i=0; i<n; i++){
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end()) freq1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end()) freq2[nums2[i]]++;
        }
        vector<vector<int>> answer;
        vector<int> temp;
        for(int num: nums1){
            if(freq1[num]!=0){
                temp.push_back(num);
                freq1[num]=0;
            }
        }
        answer.push_back(temp);
        vector<int> temp2;
        for(int num: nums2){
            if(freq2[num]!=0){
                temp2.push_back(num);
                freq2[num]=0;
            }
        }
        answer.push_back(temp2);
        return answer;

    }
};