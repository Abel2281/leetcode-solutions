class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq,ans;
        for(int num: arr) freq[num]++;
        for(auto ch: freq) ans[ch.second]++;
        for(auto ch: ans){
            if(ch.second>1) return false;
        }
        return true;
    }
};