int selectionSort(vector<int>& arr, int n,int m )
{   
    for(int i=0; i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
            swap(arr[minindex], arr[i]);
         }
    return arr[n-m];
}

long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    long long sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    sum=sum-selectionSort(arr, n,m );
return sum;
}
