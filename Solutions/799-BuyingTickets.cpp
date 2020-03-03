#include <iostream>

using namespace std;

struct A{
int a1;
int b2;
int c3;
};
int a[5001],m;
long Y(A *T , int n){
        if(n>m)
            return 0;
         if(a[n]==0){

        int aa=0,b=0,c=0;

        aa=T[n].a1+Y(T,n+1);
        a[n]=aa;
        if(n+1<=m){
            b=T[n].b2+Y(T,n+2);
            if(a[n]>b)  a[n]=b;
        }
        if(n+2<=m){
            c=T[n].c3+Y(T,n+3);
            if(a[n]>c)  a[n]=c;
        }
        }
     //   cout<<a[n]<<" "<<n<<endl;
return a[n];
}


int main()
{
    cin>>m;

    A T[m];
    for(int i=1;i<=m;i++){
        cin>>T[i].a1>>T[i].b2>>T[i].c3;
    }

    cout<<Y(T,1);
}