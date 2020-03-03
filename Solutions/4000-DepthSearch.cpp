#include <iostream>
#include <vector>
using namespace std;

int n,c,m;

struct Graph{

vector <int> v;
int val=0;

};

int DFS(Graph *G,int k){

    G[k].val=1;
    int cnt=0;
    for(int i=0;i<G[k].v.size();i++){

            if(G[G[k].v[i]].val!=1){
                cnt+=DFS(G,G[k].v[i]);
            }
    }
    return cnt+1;
}


int main(){

    cin>>n>>m;
    Graph G[n+1];
    int a;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            cin>>a;

            if(a==1){
                G[i].v.push_back(j);
                G[j].v.push_back(i);
            }
        }

        int c=DFS(G,m);

cout<<c;
return 0;
}
