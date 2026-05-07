class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int ans=0,area=0;
        while(left<right){
            area=(right-left)*(min(heights[left],heights[right]));
            ans=max(area,ans);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};
