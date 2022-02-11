class Solution {
public:
    int c=0;
    int hammingWeight(uint32_t n) {
        if(n==0){
            return c;
        }
        if(n&1){
            c++; 
        }
        return hammingWeight(n>>1);
    }
};