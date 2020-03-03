#include <iostream>
#include <string>
using namespace std;

int n;
string arr[11];
int arrint[11][11];

int cnt(int a,int b){
    if(arrint[a][b])
        return 0;

    int ans=1;
    arrint[a][b]=1;

    if(arr[a][b-1]=='.' && b-1>=0)  ans+=cnt(a,b-1);
    if(arr[a][b+1]=='.' && b+1<n)   ans+=cnt(a,b+1);
    if(arr[a-1][b]=='.' && a-1>=0)  ans+=cnt(a-1,b);
    if(arr[a+1][b]=='.' && a+1<n)   ans+=cnt(a+1,b);

return ans;
}


int main(){

    int a,b;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>a>>b;

    cout<<cnt(a-1,b-1);
return 0;
}