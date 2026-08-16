class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int n:asteroids){
            if(n>0){
                st.push(n);
            }else{
                if(st.empty()) st.push(n);
                else if(!st.empty() && st.top()<0){
                    st.push(n);
                    continue;
                }
                while(!st.empty() && st.top()>0){
                    if(st.top()+n==0){
                        st.pop();
                        break;
                    }
                    else if(st.top()+n<0){
                        st.pop();
                        if(st.empty() || st.top()<0) st.push(n);
                    }
                    else{
                        break;
                    }   
                }

            }
        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};