#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll unsigned long long
using namespace std;
ll mul(ll a,ll b){
return a*b;
}

ll P(ll b,int n){
    if(n == 1){
        return b;
    }
     if(n == 0){
        return b;
    }
    if((n & 1)){
       return mul(b, P(b, n - 1));
    }else{
        return P(mul(b, b), n / 2);
    }
}

int main(){
    int n;
    cin>>n;
    if(n==0)
        cout<<'0';
    else
        cout<<P(2,n)-1;
    return 0;
    }