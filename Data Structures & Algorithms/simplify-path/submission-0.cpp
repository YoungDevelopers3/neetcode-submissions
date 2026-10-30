class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        stringstream ss(path);
        string word;
        while(getline(ss,word,'/')){
            if(word==""||word=="."){
                continue;
            }
            else if(word==".."){
               if(!st.empty()){
                  st.pop();
               }   
            }
            else{
                st.push(word);
            }
        }
        if(st.empty()){
            return "/";
        }
    
        string ans="";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        return ans;
    }
};