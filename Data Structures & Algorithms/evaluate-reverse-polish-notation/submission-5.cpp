class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string it:tokens){
            if(it!="+" && it!="-" && it!="*" && it!="/"){
                int num=stoi(it);
                st.push(num);
            }
            else{
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                if(it=="+"){
                    st.push(x+y);
                }
                else if(it=="-"){
                    st.push(y-x);
                }
                else if(it=="*"){
                    st.push(x*y);
                }
                else{
                    st.push(y/x);
                }
            }
        }
        return st.top();

    }
};
