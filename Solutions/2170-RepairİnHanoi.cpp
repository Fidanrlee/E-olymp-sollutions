#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void f(int n,int from ,int to ,int vac){
    if(n==0)
        return;
    if(from-to==2 || from-to==-2){
    f(n-1,from,vac,to);
    f(n-1,vac,to,from);
    cout<<n<<" "<<from<<" "<<vac<<endl;
    f(n-1,to,vac,from);
    f(n-1,vac,from,to);
    cout<<n<<" "<<vac<<" "<<to<<endl;
    f(n-1,from,vac,to);
    f(n-1,vac,to,from);
    }
    else if((from==1 && to==2) ||  (from==3 && to==2)){
    f(n-1,from,to,vac);
    f(n-1,to,vac,from);
    cout<<n<<" "<<from<<" "<<to<<endl;
    f(n-1,vac,to,from);
    }
    else if((from==2 && to==1) || (from==2 && to==3)){
    f(n-1,from,vac,to);
     cout<<n<<" "<<from<<" "<<to<<endl;
    f(n-1,vac,from,to);
    f(n-1,from,to,vac);
    }
}

int main(){

    int n;
    cin>>n;
    f(n,1,3,2);

    return 0;
    }