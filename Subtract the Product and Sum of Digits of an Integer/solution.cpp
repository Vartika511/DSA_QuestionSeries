class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        while(n!=0){
           int j= n%10;
            pro= pro*j;
            sum=sum+j;
            int i= n/10;
            n=i;
        }
        return pro-sum;
    }
};
