#include <iostream>

using namespace std;
int k,m;

int arr[101][101];

struct A{

long a1;
int s;

}E[101][101];

long f(int i,int j,int n){

    if (n==0)
        return 0;
   
    if( E[i][j].s==n)
    return E[i][j].a1;

    long a,b,c,d;
    d=a=b=c=arr[i][j];
    if(i+1<=m)  a=a+f(i+1,j,n-1);
    
    if(i-1>=1)  b=b+f(i-1,j,n-1);
    if(a<b) a=b;
    
    if(j+1<=m)  c=c+f(i,j+1,n-1);
    if(a<c) a=c;
   
    if(j-1>=1)  d=d+f(i,j-1,n-1);
    if(a<d) a=d;
    
    
    E[i][j].s=n;
    E[i][j].a1=a;
  
    return a;

}


int main()
{

    cin>>m;
    cin>>k;
    
    for (int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
            E[i][j].s=0;
        }
    }
    
    cout<<f(1,1,k);

}