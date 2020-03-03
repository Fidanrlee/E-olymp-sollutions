#include <iostream>
#include <stdio.h>
using namespace std;

int q[71][71];

int f(int n,int k){

    if(n==1 || k==0) return 1;
    if(q[n][k]!=0) return q[n][k];
    return q[n][k]=f(n-1,k)+f(n,k-1);
}

int main()
{
int n,t,p,testcase;

    cin>>testcase;
    while(testcase--){
    cin>>n>>t>>p;

int k=t-n*p;

    cout<<f(n,k)<<endl;
    }
return 0;
}