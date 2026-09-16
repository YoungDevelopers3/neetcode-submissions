/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
int findPeak(MountainArray &arr) {
        int low = 0, high = arr.length() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr.get(mid) < arr.get(mid + 1))
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = findPeak(mountainArr);
        int low=0;
        int high=peak;
        //Searching in the first half , that is ascending order
        while(low<=high){
            int mid=low+(high-low)/2;
            int value=mountainArr.get(mid);
            if(value==target){
                return mid;
            }
            else if(value<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        //Searching it in the 2nd half, that is descending order
        low=peak;
        high=mountainArr.length()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int value=mountainArr.get(mid);
            if(value==target){
                return mid;
            }
            else if(value>target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};