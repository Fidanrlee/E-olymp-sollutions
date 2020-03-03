#include <iostream>
using namespace std;

int coun(int n)
{
    int a[n+1], b[n+1],c[n+1];
    a[1] = b[1] = 1;
    c[1]=0;
    for (int i = 2; i <=n; i++)
    {
        a[i] = (a[i-1] + b[i-1]+c[i-1]) % 12345;
        b[i] = (a[i-1]) % 12345;
        c[i] = b[i-1] ;
    }
    return (a[n] + b[n] + c[n])%12345;
}


int main(){
long n;
cin>>n;

cout<<coun(n);
return 0;
}