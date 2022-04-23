/* 1 2 3 4
   1 2 3 4
   1 2 3 4 */

/* #include<iostream>
using namespace std;
int main(){
    int i=4,j=4;
    for(int a=1;a<=i; a++){
        for(int b=1;b<=j;b++){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
} */

/* 3 2 1 
   3 2 1
   3 2 1 */

/* #include<iostream>
using namespace std;
int main(){
    int i=3, j=3;
    while(i>0){
        int j=3;
        while(j>0){
            cout<<j<<" ";
            j-=1;
        }
        cout<<endl;
        i=i-1;
    }
    return 0;
} */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
} */

/* 1 2 3 
   4 5 6
   7 8 9 */


/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int a=1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout<<a;
            j+=1;
            a+=1;
        }
        i+=1;
        cout<<endl;
    }
    return 0;
} */


/*  *
    **
    ***
    ****
    *****  */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
} */

/* 1
   2 2
   3 3 3 
   4 4 4 4 */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
} */

/* 1
   2 3 
   4 5 6
   7 8 9 10 */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int i=1;
     int a=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<a<<" ";
            j+=1;
            a+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
} */


/* 1
   2 3
   3 4 5
   6 7 8 9 */ 

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int a=i;
        while(j<=i){
            cout<<a<<" ";
            a+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
} */

/* 1
   2 1
   3 2 1
   4 3 2 1 */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int a=i;
        while(j<=i){
            cout<<a<<" ";
            a-=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
} */

/* A A A
   B B B 
   C C C */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch= 'A'+i-1;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}
 */


/* A B C
   A B C
   A B C*/

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch= 'A'+j-1;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
} */

/* A B C
   D E F 
   G H I*/

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int a=0;
    while(i<=n){
        int j=1;
     
        while(j<=n){
            char ch= 'A'+a;
            cout<<ch;
            a+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
} */

/*A B C
  B C D
  C D E*/

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch = 'A'+i-1;
        while(j<=n){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i++;
    }
    return 0;
} */

/* A
   B B 
   C C C */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
} */

/* A
   B C 
   D E F
   G H I J */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a=0;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
        char ch='A'+a;
            cout<<ch;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
} */

/* A
   B C 
   C D E 
   D E F G */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int a=0;
        while(j<=i){
        char ch='A'+i+a-1;
            cout<<ch;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
} */

/* D
   C D
   B C D
   A B C D */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=n;
    while(i>0){
        int j=n;
        int a=0;
        while(j>=i){
            char ch='A'+i+a-1;
              cout<<ch<<" ";
              j--;
              a++;
        }
        i--;
        cout<<endl;
    }
    return 0;
} */

/*    *
    * *
  * * *
* * * *  */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        int a=i;
        while(j){
            cout<<" ";
            j--;
        }
       while(a>0){
           cout<<"*";
           a--;
       }
       cout<<endl;
       i++;
    }
    return 0;
} */

/*  * * * * 
    * * * 
    * *
    *       */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        while(j>0){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
} */

/*  * * * *
    * * *
    * *
    *        */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        int a=i;
        while(a-1>0){
            cout<<" ";
            a--;
        }
        while(j>0){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
} */

/*   1   
    121
   12321
  1234321  */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        while(j>0){
            cout<<" ";
            j--;
        }
        int a=i;
        int b=1;
        while(a>0){
            cout<<b;
            a--;
            b++;
        }
        int c=i-1;
        while(c>0){
            cout<<c;
            c--;
        }
      cout<<endl;
      i++;

    }
    return 0;
} */

/*  1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1  */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        int a=1;
         while(j>0){
             cout<<a;
             a++;
             j--;
         }
        int fs=i-1;
        while(fs>0){
            cout<<"*";
            fs--;
        }
        int ls=i-1;
        while(ls>0){
            cout<<"*";
            ls--;
        }
        int dl=n-i+1;
        while(dl>0){
            cout<<dl;
            dl--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
 */