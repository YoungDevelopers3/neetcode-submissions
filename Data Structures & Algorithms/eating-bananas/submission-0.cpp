class Solution {
public:
    int calcTotalHours(vector<int> &piles ,int hourly){
        int total=0;
        int n=piles.size();
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/(double)hourly);
        }
        return total;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int high=piles[n-1];
        int ans=0;
        while(low<=high){
            int mid=low+((high-low)/2);
            int hr=calcTotalHours(piles,mid);
            if(hr<=h){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
            
        }
        return ans;

    }
};
