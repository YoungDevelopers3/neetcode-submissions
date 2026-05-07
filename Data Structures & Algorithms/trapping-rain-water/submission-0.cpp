class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size(),left=0;
        int right=n-1;
        int left_max=0;
        int right_max=0;

        int ans=0;
        while(left<right){
        left_max=max(height[left],left_max);
        right_max=max(height[right],right_max);
         
         if(left_max<right_max){
            ans=ans+(left_max-height[left]);
            left++;
         }
         else{
            ans=ans+(right_max-height[right]);
            right--;
         }
           
        }
        return ans;


    }
};
