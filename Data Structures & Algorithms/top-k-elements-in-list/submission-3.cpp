class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>ans;
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto it:freq){
            ans.push_back({it.second,it.first});
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        vector<int>ans2;

         for(int i=0;i<k;i++){
            ans2.push_back(ans[i].second);
         }
         return ans2;
        
    }
};
