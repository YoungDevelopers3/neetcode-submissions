class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]==target){
                ans=mid;
                break;
            }
            else if(nums[mid]>target){
                high--;
            }
            else{
                low++;
            }
        }
        return ans;
    }
};
