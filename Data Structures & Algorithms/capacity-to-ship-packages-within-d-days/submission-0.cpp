class Solution {
public:

   int calc(vector<int>& weights, int capacity){
    int total_days=1;
    int load=0;
    for(int i=0;i<weights.size();i++){
          if(load+weights[i]>capacity){
            total_days++;
            load=weights[i];
          }
          else{
            load+=weights[i];
          }
    }
    return total_days;

   }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int number_of_days=calc(weights,mid);
            if(number_of_days<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};