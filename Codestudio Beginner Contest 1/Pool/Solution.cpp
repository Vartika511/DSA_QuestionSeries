int minDays(vector<int> &a, int n, int m) {
    int sum = 0 ;
	   
	    for(int i = 0 ;i<n;i++){
	        
	        sum=sum+a[i];
	    }
	    int o =(m/sum)*(n);
	   
	    int rem = m%sum;
	
	    for(int i = 0 ; i <n ; i ++){
	        if(rem<0){
	            break;
	        }
	        o++;
	        rem=rem-a[i];
	        
	    }
	    return o-1;
}
