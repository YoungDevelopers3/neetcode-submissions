class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int>s1_freq(26,0);
        vector<int>window_freq(26,0);

        for(char ch:s1){
          s1_freq[ch-'a']++;
        }

        int l=0;
        for(int r=0;r<s2.size();r++){
           window_freq[s2[r]-'a']++;
           if(r-l+1>s1.size()){
             window_freq[s2[l]-'a']--;
             l++;
           }
           if(window_freq==s1_freq){
            return true;
           }

        }
        return false;
        
       


    }
};
