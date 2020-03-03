#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;


struct Graph {
int x;
int y;
Graph *next;
};

int n;
char arr[35][35];
bool visit[35][36];
int wall=0;

void go(int x,int y, Graph *&cur){
 if(arr[x][y]!='#' && visit[x][y]==0){
        visit[x][y]=1;
        Graph *N=new Graph;
        N->x= x;
        N->y= y;
        cur->next=N;
        cur=N;
    }
    else if(arr[x][y]=='#')wall++; ;
}



int main()
{

    cin>>n;


    for(int i=0;i<n+2;i++ )
        for(int j=0;j<n+2;j++){
           if(i==0 || j==0 || i==n+1 || j==n+1)
                arr[i][j]='#';
           else
             cin>>arr[i][j];
        }
          Graph *G=new Graph;
          G->x=1;
          G->y=1;
          Graph *cur=G;
          G->next=NULL;


        visit[1][1]=1;
memset(visit,0,sizeof(visit));

visit[1][1]=1;


  while(G!=NULL){
       go(G->x+1,G->y,cur);
       go(G->x-1,G->y,cur);
       go(G->x,G->y+1,cur);
       go(G->x,G->y-1,cur);

    G=G->next;
    }

   if(visit[n][n]!=1){
    G = new Graph;
            G->x=n;
          G->y=n;
          cur=G;
          G->next=NULL;
        visit[G->x][G->y]=1;
     while(G!=NULL){
       go(G->x+1,G->y,cur);
       go(G->x-1,G->y,cur);
       go(G->x,G->y+1,cur);
       go(G->x,G->y-1,cur);

    G=G->next;
    }
   }


cout<<(wall-4)*9;
return 0;
}