vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int i=0;i<mCols;i++){
        if(i%2!=0){
            for(int row=nRows-1; row>=0;row--){
                ans.push_back(arr[row][i]);
            }
        }
        else{
              for(int row=0; row<nRows;row++){
                ans.push_back(arr[row][i]);
            }
        }
    }
    return ans;
}
