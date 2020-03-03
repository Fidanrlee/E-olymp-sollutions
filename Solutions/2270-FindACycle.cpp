#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;

struct Graph{

    vector <int> node;
    int val=0;
    int Cat=0;
};

bool DFS(Graph *G,int k){
   if(G[k].val!=1){
    G[k].Cat=true;
    G[k].val=true;
    for(int i=0;i<G[k].node.size();i++){
            if(!G[G[k].node[i]].val&& DFS(G,G[k].node[i])) return true;
            else if(G[G[k].node[i]].Cat)                  return true;
    }
   }
    G[k].Cat=false;
    return false;
    }

void Prt(Graph * G,int k){
    cout<<k<<" ";
     G[k].val=2;
    for(int i=0;i<G[k].node.size();i++)
          if(G[G[k].node[i]].val!=2)
                Prt(G,G[k].node[i]);
    }

int main(){

    cin>>n>>m;
    Graph G[n+1];
        int a,b;
    for(int i=0;i<m;i++){
         cin>>a>>b;
         G[a].node.push_back(b);
    }
    for(int i=1;i<=n;i++){
        if(DFS(G,i)){
        cout<<"YES\n";
        Prt(G,i);
        return 0;}
    }

cout<<"NO";
return 0;
    }