class Solution {
public:
    string minWindow(string s, string t) {
       if(s.size()<t.size()){
        return "";
       }
       if(s==t){
        return s;
       }
       vector<int>freq_t(256,0);
       for(char ch:t){
         freq_t[ch]++;
       }
       int missing =t.size();
       int l=0;
       int shortest_len=INT_MAX;
       int shortest_start=0;

       for(int i=0;i<s.size();i++){
        if(freq_t[s[i]]>0){
            missing--;
            
        }
        freq_t[s[i]]--;
         while(missing==0){
            int len=i-l+1;
            if(len<shortest_len){
                shortest_len=len;
                shortest_start=l;
            }
            freq_t[s[l]]++;
            if(freq_t[s[l]]>0){
                missing++;
        
            }
            l++;

         }


       }
       
       if(shortest_len==INT_MAX){
        return "";
       }
       return s.substr(shortest_start,shortest_len);
      
    }
};
