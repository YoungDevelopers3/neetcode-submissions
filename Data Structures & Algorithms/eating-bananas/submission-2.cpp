class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         

        int low=1;
        int high=INT_MIN;
        for(int i:piles){
            high=max(i,high);
        }
       int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int k=mid;
            int total_time=0;
            for(int i:piles){
                total_time+=ceil((double)i/k);
            }
            if(total_time<=h){
              ans=min(ans,k);
              high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
