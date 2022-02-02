class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temps(nums.size());
        for(int i=0; i<nums.size(); i++){
            temps[(i+k)%nums.size()]=nums[i];
        }
        nums=temps; 
    }
};
