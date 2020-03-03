#include <iostream>
#include <vector>
#define ll int
#define P(a)  a*a*a

using namespace std;

const int M = 1000009;
int q[M];

ll f(ll n){

    if (q[n]!=0) return q[n];
    if(n==0) return 0;
    if(n<=7) return n;

    ll mn=M,k=M;
    for(ll i=2; P(i)<=n; i++){
        if(P(i)<=n) q[P(i)]=1;
                ll o=n-P(i);

                k=f(o);

                if(mn>k)    mn=k;
    }

    q[n]=mn+1;

    return q[n];
}

int main(){

ll n;
cin>>n;
cout<<f(n);

}