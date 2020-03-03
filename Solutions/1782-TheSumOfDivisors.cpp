#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define lli long long int

lli CountDivisors(lli n){
    lli cem=0;
    lli s=sqrt(n);
    if(n==1)
    return 1;
    for(lli i=2;i<=s;i++)
    if(n%i==0){
        cem=cem+i;
        cem=cem+n/i;
        }
        cem=cem+1+n;
     if(s*s==n)
       cem=cem-s;

    return cem;
}

int main(){
  lli n,m;

    cin>>n;
    m=CountDivisors(n);
    cout<<m;
return 0;
}