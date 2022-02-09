#include <bits/stdc++.h>
using namespace std;
void insert_heap(int * a,int ii)
{
   int ci = ii+1;
   while(ci!=1)
   {
      int pi = floor(ci/2);
      if(a[pi-1]<a[ci-1]){
      swap(a[pi-1],a[ci-1]);
      ci = pi;}
      else
      break;
   }
}
void heap_sort(int* a,int bar)
{
    int n = bar;
   for(int i=1;i<=n-1;i++)
   {
      if(i!=n-1)
      swap(a[0],a[bar-1]);
      else{
          if(a[0]>a[bar-1])
          swap(a[0],a[bar-1]);
      }
      bar--;
      int pi =1;
      while((2*pi+1)<=bar)
      {
          int lc = 2*pi;
          int rc = (2*pi) + 1;
          if((a[pi-1]<a[rc-1]) && (a[rc-1]>a[lc-1])){
          swap(a[pi-1],a[rc-1]);
          pi = rc;}
          else if((a[pi-1]<a[lc-1]) && (a[lc-1]>a[rc-1])){
          swap(a[pi-1],a[lc-1]);
          pi =lc;}
          else
          break;
      }
   }
}
int main()
{
    cout<<"Enter the no of elements:\n";
    int n;
    cin>>n;
    int heap[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        cin>>heap[i];
        else
        {
            cin>>heap[i];
            insert_heap(heap,i);
        }
    }
    for(int j=0;j<n;j++)
    cout<<heap[j]<<" ";
    cout<<"\n";
    heap_sort(heap,n);
    for(int j=0;j<n;j++)
    cout<<heap[j]<<" ";
}