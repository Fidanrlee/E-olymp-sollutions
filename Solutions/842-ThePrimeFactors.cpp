#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void  printt (long int n){
while(n%2==0){
    n=n/2;
   cout<<2;
   if(2<=n)
    cout<<"*";}
for(long int i=3;i<=sqrt(n);i+=2){
while(n%i==0){
    n=n/i;
   cout<<i;
   if(i<=n)
    cout<<"*";}
    }
if(sqrt(n)>1)
    cout<<n;


}

int main(){
  long int n;

    cin>>n;
printt(n);

return 0;
}