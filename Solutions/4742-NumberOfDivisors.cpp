#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long int CountDivisors(long int n){
    long int m=0;
    long int s=sqrt(n);
    for(long int i=2;i<=s;i++){
    if(n%i==0){
        m++;
       // cout<<i<<" "<<m<<endl;
        }
    }
    m=m*2;
    if(s*s==n)
       m--;
    return m;
}

int main(){
  long int n,m;

    cin>>n;
    m=CountDivisors(n);
    cout<<m;
return 0;
}