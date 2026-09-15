class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        while(low<=high){
           int  mid=low+(high-low)/2;
           long long sq=(long long )mid*mid;
            if(sq==x){
                 return mid;
            }
            else if(sq>x){
                
                high=mid-1;
                
            }
            else{
                
                low=mid+1;
                
            }
        }
        return low-1;
    }
};