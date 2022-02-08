class Solution {
public:
    int addDigits(int num) {
           while(num/10!=0){
            int r=num%10;
            num = num/10+r;
        }
        return num;
    }
};
