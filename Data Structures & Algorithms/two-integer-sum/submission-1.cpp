class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(freq[temp] && i!=freq[temp]){
                ans.push_back(i);
                ans.push_back(freq[temp]);
                break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
