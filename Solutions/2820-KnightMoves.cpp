#include <iostream>
#include <list>
#include <string.h>
#include <vector>
#include <cstring>
using namespace std;

struct Graph{
string s;
int motion;
Graph *next;
};

string S (string des,int x){

    switch (x){
case 1:
    des[0]+=2;
    des[1]+=1;
    break;
case 2:
    des[0]+=2;
    des[1]-=1;
     break;
case 3:
    des[0]-=2;
    des[1]+=1;
     break;
case 4:
    des[0]-=2;
    des[1]-=1;
     break;
case 5:
    des[0]+=1;
    des[1]+=2;
     break;
case 6:
    des[0]+=1;
    des[1]-=2;
     break;
case 7:
    des[0]-=1;
    des[1]-=2;
     break;
case 8:
    des[0]-=1;
    des[1]+=2;
     break;
    }

return des;
}

int main(){

string s1,s2;
while(cin>>s1){
        cin>>s2;
int visit[8][8];
memset(visit,0,sizeof(visit));
Graph *G=new Graph;
G->s=s1;
G->motion=0;
 Graph *cur=G;

while(G->s!=s2){
 //cout<<G->s<<" ";
   for(int i=1;i<9;i++){
        string SS=S(G->s,i);
    if(SS[0]>='a' && SS[0]<='h' && SS[1]>='1' && SS[1]<='8' && visit[SS[0]-97][SS[1]-49]==0){
       visit[SS[0]-97][SS[1]-49]=1;
        Graph *N=new Graph;
    N->s=SS;
    N->motion=G->motion+1;
    cur->next=N;
    cur=N;
    }if(cur->s==s2){break;}
    }
    G=G->next;
    }
    cout<<"To get from "<<s1<<" to "<<s2<< " takes "<<G->motion<<" knight moves.\n";
}return 0;
}