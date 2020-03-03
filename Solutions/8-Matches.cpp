#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t,cem;
    cin>>t;
    int a=sqrt(t);
  if(t==a*a)
    cem=(a+1)*a*2;
    else {
        int x=t%a;
        int b=t/a;
        cem=(b+1)*a+(a+1)*b;
        if(x!=0)
            cem=cem+(x-1)*2+3;
    }
  cout<<cem;
    return 0;
}