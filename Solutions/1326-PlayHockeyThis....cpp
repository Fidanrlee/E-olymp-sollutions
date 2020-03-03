#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void factorial (int n){
    if (n==2)
        cout<<"2";
    else if(n==1)
        cout<<"1";
    else{
int arr[500];
int arrsize=1;
arr[0]=1;
for(int i=n-2;i<=n;i++){
        int q=0;
    for(int j=0;j<arrsize;j++){
        //    cout<<arr[j]<<" ";
        int t=arr[j]*i+q;
        arr[j]=t%10;
        q=t/10;
    }
   while(q){
        arr[arrsize]=q%10;
        q=q/10;
        arrsize++;
    }}
   // cout<<arrsize<<endl;
    for (int i=arrsize-1; i>=0; i--)
        cout << arr[i];
    }
}


int main()
{
   int n;
   cin>>n;
factorial(n);
return 0;
}