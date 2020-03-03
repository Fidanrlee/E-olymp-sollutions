#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int H[5001];


int f(int n){
if(n<=5)
    H[n]=n;

    if(H[n]==0){
        int minn=n;
        int k=f(n-1)+1;
          //  cout<<k;
            if(k<minn)
                minn=k;
    for(int i=1;i<=sqrt(n);i++){
            if(n%i==0 && i!=1){
                k=f(n/i)+i;
                if(minn>k)
                    minn=k;
           }
      }
      H[n]=minn;
return minn;}
else return H[n];
        }


int main(){
int n;
cin>>n;
   cout<<f(n);
return 0;

}