class Solution {
public:
    string decodeString(string s) {
        stack<int> numst;
        stack<string> str;
        int num=0;
        string curr = "";
        for(char ch:s){
            if(isdigit(ch)){
                num = num*10 +ch-'0';
            }
            else if(ch=='['){
                numst.push(num);
                str.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']'){
                int rep = numst.top();
                numst.pop();

                string prev = str.top();
                str.pop();

                string temp = "";
                for(int i=0; i<rep; i++){
                    temp += curr;
                }
                curr = prev+temp;
            }
            else{
                curr+=ch;
            }
        }
        return curr;
    }
};