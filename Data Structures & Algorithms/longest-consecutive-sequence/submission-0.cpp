class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1){
            return nums.size();
        }
        int len=0,temp=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                temp++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                len=max(len,temp);
                temp=1;
            }
        }
        len=max(len,temp);
        return len;





    }
};
