#include <iostream>
#include <vector>
using namespace std;

 vector <int> F;

 struct Graph{
 int visit=0;
 vector <int > v,k;
 };

int dfs(int s,Graph *G){
    G[s].visit=1;
    for(int i=0;i<G[s].v.size();i++){
            int h=G[s].v[i];
        if(G[h].visit==0)   dfs(h,G);
    }
    F.push_back(s);
}

 int rdfs(int s,Graph *G){
    G[s].visit=2;
    for(int i=0;i<G[s].k.size();i++){
            int h=G[s].k[i];
        if(G[h].visit!=2)   rdfs(h,G);
    }
}

 int main(){
 int m,n,ans=0;
 cin>>n>>m;
 Graph G[n+1];

 for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    G[a].v.push_back(b);
    G[b].k.push_back(a);
 }

  for(int i=1;i<=n;i++){if(G[i].visit!=1) dfs(i,G);}
  for(int i=F.size()-1;i>=0;i--){if(G[F[i]].visit!=2) {rdfs(F[i],G); ans++;}}
  cout<<ans;
  return 0;
 }