#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int arr[101][101];


int main(){

    int n,m,a,b;
    cin>>n>>m;


    for(int i=0;i<m;i++){
            cin>>a>>b;
            arr[a][b]=1;
            arr[b][a]=1;
    }

    for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++){
        if(i!=j && arr[i][j]==0){
            cout<<"NO";
            return 0;
        }
       }
   cout<<"YES";
    return 0;
}
