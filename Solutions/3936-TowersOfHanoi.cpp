#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void f(int n,int n1,int n2,int n3){
    if(n==0)
        return;

    f(n-1,n1,n3,n2);
    cout<<n1<<" "<<n2<<endl;
    f(n-1,n3,n2,n1);
}

int main(){

    int n;
    cin>>n;
    f(n,1,2,3);

    return 0;
    }