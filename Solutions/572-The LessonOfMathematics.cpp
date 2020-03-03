#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void  printt (long int n){
int k=0;
while(n%2==0){
    n=n/2;
    k++;}
    if(k>=1)
        cout<<"2";
    if(k>1)
    cout<<"^"<<k;
    if(n>2 && k>=1)
    cout<<"*";
for(long int i=3;i<=sqrt(n);i+=2){
        k=0;
while(n%i==0){
    n=n/i;
k++;
   }
    if(k>=1)
        cout<<i;
    if(k>1)
        cout<<"^"<<k;
    if(n>i && k>=1)
        cout<<"*";


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