#include <iostream>
#include <vector>
using namespace std;

struct Graph {

vector <int >  v[101];
int val[101]={0};

} G;

void DFS(int k){
    G.val[k]=1;
        for(int i=0;i<G.v[k].size();i++){
            if(!G.val[G.v[k][i]]){
                    cout<<k<<" "<<G.v[k][i]<<endl;
                DFS(G.v[k][i]);
            }}
}


int main()
{
    int n,a,b,m;
        cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        G.v[a].push_back(b);
        G.v[b].push_back(a);
    }

    DFS(1);

    return 0;
}