#include <iostream>

using namespace std;

int  m, n, a, b, k;
int arr[5001][5001];


void f(int x,int y ){
    int x1=x-1,y1=y-1;
    int x2=x-a,y2=y-b;

    if(x2<0)   x2=0;
    if(y2<0)   y2=0;

    if(x>m-a)   x1=m-a;
    if(y>n-b)   y1=n-b;


    for(int i=x2;i<=x1;i++){
        for(int j=y2;j<=y1;j++){
            arr[i][j]=1;
    }
    }
}

int main()
{
    int x,y;

    cin>>m>>n>>a>>b>>k;

    for(int i=0;i<k;i++){
        cin>>x>>y;
        f(x,y);
    }

    int cem=0;
        for(int i=0;i<=m-a;i++)
        for(int j=0;j<=n-b;j++)
                if( arr[i][j]==1)   cem++;
cout<<(m-a+1)*(n-b+1)-cem;
}