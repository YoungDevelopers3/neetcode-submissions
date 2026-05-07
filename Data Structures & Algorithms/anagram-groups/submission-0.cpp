class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        if(strs.size()==0 || strs.size()==1){
            ans.push_back(strs);
            return ans;
        }

        unordered_map<string,vector<string>>freq;
        for(string i:strs){
            string temp=i;
            sort(temp.begin(),temp.end());
            freq[temp].push_back(i);
        }

        for(auto i:freq){
            ans.push_back(i.second);
        }
        return ans;
    }
};
