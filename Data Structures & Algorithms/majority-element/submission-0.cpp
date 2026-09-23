class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i:nums){
            freq[i]++;
            if((n/2)<freq[i]){
                return i;
            }
        }
        return 0;
    }
};