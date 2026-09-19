class Solution {
public:
    int calc(vector<int>& nums,int capacity){
          int subarrays=1;
          int sum=0;
          for(int i:nums){
             if(sum+i>capacity){
                subarrays++;
                sum=i;
             }
             else{
                 sum+=i;
             }

          }   

        return subarrays;

    }

    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int min_arrays=calc(nums,mid);
            if(min_arrays<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};