class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string str="";
        while(i<word1.size() || j<word2.size()){
              
              if(i<word1.size()){
                 str+=word1[i];
                 i++;
              }
              if(j<word2.size()){
                 str+=word2[j];
                 j++;
              }
                  
              
        }
        return str;
    //     if(i==j){

    //     }
    //    else if(i==word1.size()){
    //         str+=word2.substr(j);
    //         return ans;
    //     }
    //     else {

    //     }
    }
};