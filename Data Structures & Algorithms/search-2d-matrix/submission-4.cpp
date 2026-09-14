class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int row=matrix.size();
        int column=matrix[0].size();
        int high=row*column-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int mid_val=matrix[mid/column][mid%column];
            if(mid_val==target){
                return true;
            }
            else if(mid_val>target){
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
