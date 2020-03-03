#include <iostream>
#include <cmath>
using namespace std;

int eks (int r){
    int x=0;

    while(r/10!=0){
        x=x*10+r%10;
        r/=10;
        }
    x=x*10+r;
    return x;
}

int yoxla(int i){
        int e=eks(i);
        if(i==1)
            return 0;
        for(int j=2;j<sqrt(i)+1;j++){
            if(i%j==0 && i!=2)
                return 0;
                }
        for(int j=2;j<sqrt(e)+1;j++){
            if(e%j==0 && e!=2)
                return 0;
            }
        //    cout<<i<<" "<<e<<endl;
return 1;
}

int main(){
    int n,m;
    cin>>n>>m;
    int k=0;
    for(int i=n;i<=m;i++){
       k=k+yoxla(i);
    }
    cout<<k;
return 0;
}