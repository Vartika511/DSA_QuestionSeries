class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int f=0;
        int l=nums.size()-1;
        int s = l;
        if(l==0){
            return 0;
        }
        if(l==1){
            return nums[0]>nums[1]?0:1;
        }
        while(f<l){
            int mid = f+(l-f)/2;
            if(mid>0 && mid<l){
                 if(nums[mid]<nums[mid+1]){
                    f = mid+1;
                }else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                    return mid;
                }else{
                    l = mid-1;
                }
            }else if(mid==0){
                return nums[0]>nums[1]?0:1;
            }else{
                return nums[s]>nums[s-1]?s:s-1;
            }
        }
        return f;
    }
};