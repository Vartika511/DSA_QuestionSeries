class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i=m-1,j=n-1,p=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j])nums1[p--]=nums1[i--];
            else nums1[p--]=nums2[j--];
               }
        while(j>=0)nums1[p--]=nums2[j--];
    }
};
