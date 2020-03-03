#include <iostream>
#include <vector>
#define ll long long int
#define M 1000009
using namespace std;

int q[M];

ll f(ll n){

    if( n==1 )         return 0;
    else if( q[n]!=0 ) return q[n];

   int ans=M,k=M;

            if(n%3==0) ans=f(n/3);
            if(n%2==0) k=f(n/2);
            if(ans>k)  ans=k;
            k=f(n-1);
            if(ans>k)  ans=k;


    q[n]=ans+1;
    return q[n];
}

int main(){

ll n;

while(cin>>n)
cout<<f(n)<<endl;

}