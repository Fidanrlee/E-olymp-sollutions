#include <iostream>
#include <list>
#include <string.h>
#include <vector>

using namespace std;


struct GRAPH {
    vector <int> v;
} G[50001];

struct path {
    int dis[50001];

    vector <int> v;
} P;


int main(){

int n,a,m,b,l1,l2;
cin>>n>>m>>a>>b;

    memset(P.dis,-1,sizeof(P.dis));
    P.dis[a]=0;

    for(int i=1;i<=m;i++){
         cin>>l1>>l2;
         G[l1].v.push_back(l2);
         G[l2].v.push_back(l1);
    }

    list <int > que;
    que.push_back(a);
 P.v.push_back(a);
    while(!que.empty()){

        int s=que.front();

        if(s==b){cout<<P.dis[s]<<endl;  break;}

        for(int i=0;i<G[s].v.size();i++)
            if(P.dis[G[s].v[i]]==-1){

                P.dis[G[s].v[i]]=P.dis[s]+1;
                que.push_back(G[s].v[i]);

                if(G[s].v[i]==b)
                     P.v.push_back(s);


            }
         que.pop_front();
    }

    if(P.dis[b]==-1)
        cout<<"-1";
    else{
        P.v.push_back(b);
    for(int i=0;i<P.v.size();i++)   cout<<P.v[i]<<" ";
    }


return 0;
}