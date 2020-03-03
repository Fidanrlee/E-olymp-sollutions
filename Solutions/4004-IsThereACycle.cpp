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


int main(){

    cin>>n;
    Graph G[n+1];
        int a,b;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
         cin>>a;
    if(a==1)
         G[i+1].node.push_back(j+1);
    }

    }
    for(int i=1;i<=n;i++){
        if(DFS(G,i)){
        cout<<'1';
        return 0;}
    }

cout<<'0';
return 0;
    }