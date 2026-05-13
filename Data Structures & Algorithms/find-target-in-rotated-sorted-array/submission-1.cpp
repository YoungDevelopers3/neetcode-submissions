class Solution {
public:
    int search(vector<int>& nums, int target) {
                int l = 0;
        int r = nums.size() - 1;

        // STEP 1: find pivot
        while(l < r){
            int mid = l + (r - l)/2;
            if(nums[mid] > nums[r]){
                l = mid + 1;
            } else {
                r = mid;
            }
        }

        int pivot = l;
        int n = nums.size();

        // STEP 2: choose correct half
        if(target >= nums[pivot] && target <= nums[n-1]){
            l = pivot;
            r = n - 1;
        } else {
            l = 0;
            r = pivot - 1;
        }

        // STEP 3: normal binary search
        while(l <= r){
            int mid = l + (r - l)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }

        return -1;

    }
};
