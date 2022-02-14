vector<vector<int>> findTriplets(vector<int> arr, int n, int K){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int i = 0, j, k;
    while (i < n - 2){
        j = i + 1;
        k = n - 1;
        while (j < k){
            if (arr[i] + arr[j] + arr[k] == K){
                ans.push_back({arr[i], arr[j], arr[k]});
                int a = arr[j];
                j++;

                while (j < n - 1 && a == arr[j]){
                    j++;
                }
                int b = arr[k];
                k--;
                
                while (k > j && b == arr[k]){
                    k--;
                }
            }
            else if (arr[i] + arr[j] + arr[k] < K){
                j++;
            }
            else{
                k--;
            }
        }
        i++;
        while (arr[i] == arr[i - 1]){
            i++;
        }
    }
    return ans;
}