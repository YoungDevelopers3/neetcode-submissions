class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>freq;
        for(auto i:strs){
            string key=i;
            sort(key.begin(),key.end());
            freq[key].push_back(i);
        }
        for(auto i:freq){
            ans.push_back(i.second);
        }
        return ans;



    }
};
