#include <iostream>
using namespace std;

long f(long n){
if(n==1)
    return 2;
if(n==2)
    return 4;

    else
        return f(n-1)+f(n-2);
}


int main(){
long n;
cin>>n;
long a=1;
a=f(n);
cout<<a;
return 0;
}