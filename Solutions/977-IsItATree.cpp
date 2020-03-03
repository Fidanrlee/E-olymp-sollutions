#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#define f1(n,i) for(int i=1;i<=n;i++)
#define f0(n,i) for(int i=0;i<n;i++)
using namespace std;
int n,c=0;
int Gr[101][101];

struct Graph {

vector <int> v[101];
int val[101]={0};

} G;

void DFS(int k){
        c++;
    G.val[k]=1;
    f0(G.v[k].size(),i)
        if(!G.val[G.v[k][i]])    DFS(G.v[k][i]);
}

void YN (int k){

if(k==n-1 && c==n)
        cout<<"YES";
     else
        cout<<"NO";


}


int main(){

        cin>>n;
        int edg=0;

       f0(n,i)
       f0(n,j){
         cin>>Gr[i][j];

       if(Gr[i][j]){
            edg++;
       G.v[i+1].push_back(j+1);
       G.v[j+1].push_back(i+1);
       }}

        DFS(1);
        YN(edg/2);
return 0;
}