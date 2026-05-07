class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 && nums[0]==target){
            return 0;
        }
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int m=low+(high-low)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                high--;
            }
            else{
                low++;
            }
        }
        return -1;
    }
};
