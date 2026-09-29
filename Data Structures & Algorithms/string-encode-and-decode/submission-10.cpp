class Solution {
public:

    string encode(vector<string>& strs) {
        string s1;
        for(string str:strs){
            s1+=to_string(str.size())+"#"+str;
        }
        return s1;
    }

    vector<string> decode(string s) {
         vector<string>ans;
         int i=0;

         while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,len));
            i=j+1+len;
         }
         return ans;
    }
};
