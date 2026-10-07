class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=m+n;
        for(int i=0;i<l;i++){
            if(i+1>m){
                nums1.pop_back();
            }
        }
        for(int i:nums2){
            nums1.push_back(i);
        }
        sort(nums1.begin(),nums1.end());
    }
};