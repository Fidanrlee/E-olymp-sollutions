#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
 int n,m;
long long k;

struct Mat {
        int arr[31][31];
     Mat(){
        memset(arr,0,sizeof(arr));
     };
}A,S;

Mat Mul (Mat a1,Mat a2){
    Mat C;
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
        for(int k=1;k<=n;k++)
    C.arr[i][j]+=(a1.arr[i][k]*a2.arr[k][j])%m;
}
}
return C;
}

void Build(){
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
   scanf("%i", &A.arr[i][j]);
   }
}
}

Mat add(Mat a1,Mat a2){
    Mat Cem;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
    Cem.arr[i][j]=(a1.arr[i][j]+a2.arr[i][j])%m;
    }
    return Cem;
}

void prt(Mat R){
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++)
        printf("%d ", R.arr[i][j]);
        printf("\n");
}
}

Mat power(Mat a1,int k1){
    if(k1==1)
        return a1;
    if((k1&1))
        return Mul(a1,power(a1,k1-1));
    else
        return power(Mul(a1,a1),k1/2);
}

Mat solve(int k1){
    if(k1==0) return S;
    if(k1==1) return A;
        if(k1 & 1){
            return add(A,Mul(A,solve(k1-1)));
        }else{
        Mat D=solve(k1/2);
        return add(D,Mul(power(A,k1/2),D));
        }
}

int main(){

 //   ios_base::sync_with_stdio(false);
    scanf("%d %lld %d", &n,&k,&m);
    Build();
     memset(S.arr,1,sizeof(S.arr));
    Mat R;
    R=solve(k);

    prt(R);
return 0;
}