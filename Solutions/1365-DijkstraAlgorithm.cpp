#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstring>
#define INF 100001
using namespace std;

struct Edge{
    int src, dest, weight;
    Edge *next;
    };
Edge *root=NULL;


 int BELL(int n,int first,int next){
 Edge *edge=root;

     int dist[n+1];

        for(int i=1;i<=n;i++)   dist[i]=INF;
    dist[first]=0;
    for(int i = 1; i <=n; i++) {
            edge=root;
    while( edge!=NULL) {
			if(dist[edge->src]!= INF && dist[edge->dest] > dist[edge->src] + edge->weight) {
				dist[edge->dest] = dist[edge->src] + edge->weight;
			}
			edge=edge->next;
		}
	}
    delete root;
    delete edge;
	if(dist [n]!=INF)
	return dist[next];
	else
        return -1;
	}

int add(Edge *&edge,int i,int j,int w){
    if(edge==NULL)
    {
        edge=new Edge;
        edge->src=i;
        edge->dest=j;
        edge->weight=w;
        edge->next=NULL;
        root=edge;
    }
     else{
         Edge *N= new Edge;
        N->src=i;
        N->dest=j;
        N->weight=w;
        N->next=NULL;
        edge->next=N;
        edge=N;
        }

return 0;

}


 int main(){

        int n,first,next,w;
        cin>>n>>first>>next;

   Edge *edge=new Edge;
   edge=NULL;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cin>>w;
        if(w!=0 && w!=-1)   add(edge,i,j,w);
    }}

 cout<<BELL(n,first,next);

  return 0;
 }