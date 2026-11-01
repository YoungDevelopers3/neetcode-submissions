class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>>st;
        string current="";
        int num=0;
        for(char ch:s){
            if(isdigit(ch)){
              num=num*10+(ch-'0');
            }
            else if(ch=='['){
                st.push({current,num});
                num=0;
                current="";
            }
            else if(ch==']'){
                auto [prev,k]=st.top();
                st.pop();
                string repeat="";
                for(int i=0;i<k;i++){
                    repeat+=current;
                }
                current=prev+repeat;
            }
            else{
                current+=ch;
            }
        }
        return current;
    }
};