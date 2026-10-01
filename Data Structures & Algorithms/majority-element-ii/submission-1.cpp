class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i:nums){
            freq[i]++;
            if(freq[i]>(n/3) && find(ans.begin(),ans.end(),i)==ans.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};