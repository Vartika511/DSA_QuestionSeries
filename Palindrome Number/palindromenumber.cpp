class Solution {
public:
    bool isPalindrome(int x) {
      int real = x;
      int number = 0;
      if(x<0){
        return false;
      }
        while (x!=0){
          int digit = x%10;
         if((number>INT_MAX/10)||(number<INT_MIN/10)){
                return false;
            }
          number = (number * 10) +digit;
          x=x/10;
        }
      if(real==number){
        return true;
      }
      else{
        return false;
      }
    }
};
