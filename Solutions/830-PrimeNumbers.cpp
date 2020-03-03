#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int k=0;

    for(int i=n;i<=m;i++){
        int t=2;
        while(i%t!=0 && t<=sqrt(i)){
        t++;
        }
    if(i==2){
        k=1;
    cout<<"2"<<endl;}
    if(i%t!=0){
        cout<<i<<endl;
        k=1;
    }
    }
    if(k==0)
        cout<<"Absent";
return 0;
}