int getPivot(vector<int>& arr, int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>= arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
       mid=s+(e-s)/2; 
    }
    return s;
}


int search(vector<int>& arr, int start, int end, int key){
   
    while (start<=end)
    {
        int mid=start +(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
   int pivot=getPivot(arr,n);
    if(k>=arr[pivot] &&k<=arr[n-1]){
        return search(arr, pivot, n-1, k);
    }
    else{
        return search(arr,0,pivot-1, k);
    }
}
