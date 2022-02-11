class Solution {
public:
    bool isPowerOfTwo(int n) {
        int flag=0;
        if(n==0){
            return false;
        }
        while(n){
            if(n&1){
                flag++;
            }
            if(flag>1){
                return false; 
            }
            n=n>>1;
        }
        return true;
    }
};