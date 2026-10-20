class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int b:asteroids){
            bool safe=true;
            while(safe && !st.empty() && b<0 && st.top()>0){
                if(abs(b)==abs(st.top())){
                    st.pop();
                    safe=false;
                }
                else if(abs(b)>abs(st.top())){
                    st.pop();
                    safe=true;
                }
                else{
                    safe=false;
                    if(st.top()==b){
                        st.pop();
                    }
                }
            }
            if(safe){
                st.push(b);
            }

        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};