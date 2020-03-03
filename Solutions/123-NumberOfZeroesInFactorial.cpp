#include <iostream>
#include <cmath>
using namespace std;

long long int factor (long long int n){
    long long int m=0;

    for(long long int i=5;i<=n;i*=5)
    {m=m+n/i;
    }
    return m;
}

int main(){
   long long int n,m;
    cin>>n;
    m=factor(n);
    cout<<m;
return 0;
}