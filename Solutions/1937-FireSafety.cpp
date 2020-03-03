#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

 vector <int> F;

 struct Graph{
 int visit=0;
 vector <int > v;
 };

int dfs(int s,Graph *G){
    G[s].visit=1;
    int k=0;
    for(int i=0;i<G[s].v.size();i++){
            int h=G[s].v[i];
        if(G[h].visit==0)   {
                k++;
                dfs(h,G);}
    }
    if(k==0)
    F.push_back(s);
}

 int main(){
 int m,n,ans=0;
 cin>>n>>m;
 Graph G[n+1];

 for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    G[a].v.push_back(b);
 }
  for(int i=1;i<=n;i++){if(G[i].visit!=1) dfs(i,G);}
  cout<<F.size()<<endl;
 copy(F.begin(),F.end(),ostream_iterator<int>(cout," "));

  return 0;
 }