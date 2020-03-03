#include <iostream>
#include <list>
#include <string.h>
#include <vector>

using namespace std;

int a,b,f,g;
bool visit[10000];

struct Graph{
int motion;
int l;
Graph *next;
};

Graph *G=new Graph;
int dig (int cnt)
{
        int digit,digitsum=0;
        int copycnt=cnt;

        while(copycnt!=0){
            digit=copycnt%10;
            digitsum+=digit;
            copycnt/=10;
        }

        cnt+=digitsum;
        return cnt;

}

void addgraph(int sum,Graph *&cur){
 if( sum>0 && sum<=9999 && visit[sum]==0 ){
        visit[sum]=1;
        Graph *N=new Graph;
        N->l=sum;
        N->motion=G->motion+1;
       cur->next=N;
        cur=N;
       }
};

int main(){
cin>>a>>b;
int ind=0;

G->motion=0;
G->l=a;
  Graph *cur=G;
int k=0;
    while(G->l!=b){

        Graph *root=G;

        int sum=(G->l)*3;
        addgraph(sum,cur);
    if(sum==b) {G=cur;break;}
        sum=(G->l)-2;
         addgraph(sum,cur);
    if(sum==b) {G=cur;break;}
        sum=dig(G->l);
        addgraph(sum,cur);
    if(sum==b) {G=cur;break;}
        G=G->next;
       root=NULL;
    }
    cout<<G->motion;
return 0;
}