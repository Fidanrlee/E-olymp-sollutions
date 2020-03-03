#include <iostream>
#include <cmath>
using namespace std;

int main()
{
long long a,b,m;
long long c=1;
cin>>a>>b>>m;
    for(long long i=0;i<b;i++){
    c=c*a;
    c=c%m;}
cout<<c;
return 0;
}