long long threeWaySplit(int n, vector<int> arr){
  
 int i=0;
int j=arr.size()-1;
int ans=0;
int sumi=arr[i];
 int sumj=arr[j];
while(i<j){
    if(sumi<sumj){
        i++;
 sumi+=arr[i];
        } else if(sumi>sumj){
        j--;
   sumj+=arr[j];
    } else {
       ans=sumi;
        i++;
   sumi+=arr[i];
    }
}
    return ans;
}
