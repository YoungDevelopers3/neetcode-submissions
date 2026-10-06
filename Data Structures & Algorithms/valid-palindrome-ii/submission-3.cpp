class Solution {
public:
    bool ispal(string x){
        string y=x;
        reverse(y.begin(),y.end());
        if(y==x){
            return true;
        }
        return false;
    }
    bool validPalindrome(string s) {
       if(ispal(s)){
        return true;
       }
       
        int l=0;
        int h=s.size()-1;
        while(l<h){
            if(s[l]!=s[h]){
                string a=s.substr(l+1,h-l);
                string b=s.substr(l,h-l);
                return ispal(a)||ispal(b);     
            }
            l++;
            h--;
        }
        return false;
    }
};