#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void factorial (int n){
int arr[100000];
int arrsize=1;
arr[0]=1;
for(int i=1;i<=n;i++){
        int q=0;
    for(int j=0;j<arrsize;j++){
        int t=arr[j]*2+q;
        arr[j]=t%10;
        q=t/10;
    }
   while(q!=0){
        arr[arrsize]=q%10;
        q=q/10;
        arrsize++;
    }
    }
    int f=0;
    while(arr[f]==0)
       f++;
        arr[f]--;
    for (int i=arrsize-1; i>=0; i--){
        if(i<f)
            cout<<"9";
        else
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