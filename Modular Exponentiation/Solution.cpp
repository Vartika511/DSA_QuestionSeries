int modularExponentiation(int x, int n, int m) {
	int ans=1;
  while(n>0){
      if(n&1){
          ans=( 1LL*(ans)*(x)%m)%m;
      }
      x=(1LL*(x)%m*(x)%m)%m;
      n=n>>1;
  }
    return ans;
}
