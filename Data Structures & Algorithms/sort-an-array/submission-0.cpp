class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>freq;
        int low=INT_MAX;
        int high=INT_MIN;
        for(int i:nums){
            freq[i]++;
            low=min(low,i);
            high=max(high,i);
        }
        vector<int>ans;
        for(int i=low;i<=high;i++){
            if(freq.count(i)){
                ans.insert(ans.end(),freq[i],i);
            }
        }
        return ans;
    }
};