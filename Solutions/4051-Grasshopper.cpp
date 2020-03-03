#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int q[30];

ll f(ll n,ll k){

    if(n==0) return 1;
    else if(q[n]!=0) return q[n];
    int ans=0;
    for(int i=1;i<=k;i++){
    if(n>=i)
    ans=ans+f(n-i,k);

    }
    q[n]=ans;
    return q[n];
}

int main(){

ll n,k;
cin>>n>>k;
cout<<f(n-1,k);

}
