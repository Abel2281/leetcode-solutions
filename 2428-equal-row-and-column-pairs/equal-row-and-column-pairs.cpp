class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> freq;
        int n=grid.size();
        int ans=0;
        for(int i=0; i<n; i++) freq[grid[i]]++;
        for(int j=0; j<n; j++){
            vector<int> col;
            for(int i=0; i<n; i++) col.push_back(grid[i][j]);
            if(freq.find(col) != freq.end()) ans += freq[col];
        }
        return ans;
    }
};