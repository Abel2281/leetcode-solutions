class Solution {
public:
    string removeStars(string s) {
        stack<char> result;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='*') result.push(s[i]);
            else{
                result.pop();
            }
        }
        string str;
        while(!result.empty()){
            str.push_back(result.top());
            result.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};