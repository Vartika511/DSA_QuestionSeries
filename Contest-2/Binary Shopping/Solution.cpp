string binaryShopping(string s, int P)
{
      // Write your code here.  
    int op=0;
    for(int i=s.size()-1;i>0;i--){
        if(s[i]=='1'){
            s[i]='0';
            op++;
        }
        if(op==2){
            break;
        }
    }
    if(op==2|| op==0){
        return s;
    }
    else if(op==1){
        if(s[0]=='1')
            s[0]='0';
        else
            s[0]='1';
        return s;
    }
}
