class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=1;i<=nums.size()+1;i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
               return i;
            }
        }
        return nums.size()+1;
    }
};