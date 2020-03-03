#include <iostream>
#include <algorithm>
#define MAX 1000005
using namespace std;
long n;
long arr[MAX];
struct T{
int G;
int L;
};
T tree[MAX*4];

int GCD(int a, int b){
    if(a==0)
        return b;
    else if(b==0)
        return a;
  int r ;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
  }

int LCM (int a,int b){
    int o=GCD(a,b);
int L=a*b/o;

return L;
}

void build(int l,int r,int node){
if(l==r){
    tree[node].G=arr[r];
    tree[node].L=arr[r];
}
else{
    int mid=(r+l)/2;
    build(l,mid,2*node);
    build(mid+1,r,2*node+1);
    tree[node].G=GCD(tree[2*node].G,tree[2*node+1].G);
    tree[node].L=LCM(tree[2*node].L,tree[2*node+1].L);
}
}

T getGCDLCM(int l1,int r1,int l,int r,int node){

if(l1>r || r1<l ){
    T P;
    P.G=0;
    P.L=1;
    return P;
}
if(l>=l1 && r<=r1){
   return tree[node];
}
else{
    int mid=(l+r)/2;
    T A,B;
    A=getGCDLCM(l1,r1,l,mid,node*2);
    B=getGCDLCM(l1,r1,mid+1,r,node*2+1);
    T P;
    P.G=GCD(A.G,B.G);
    P.L=LCM(A.L,B.L);
    return P;
}
}

void updata(int r ,int l,int node,int pos,int val){
if(l==r){
    tree[node].G=val;
    tree[node].L=val;
}
else{
    int mid=(r+l)/2;
    if(pos>=l && pos<= mid)
    updata(l,mid,2*node,pos,val);
    if(pos>=mid+1 && pos<= r)
    updata(mid+1,r,2*node+1,pos,val);

    tree[node].G=GCD(tree[2*node].G,tree[2*node+1].G);
    tree[node].L=LCM(tree[2*node].L,tree[2*node+1].L);
}
}


int main(){
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
    cin>>arr[i];
 }
 build(1,n,1);
 int m;
 cin>>m;
 for(int i=0;i<m;i++){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==2)
        updata(1,n,1,b,c);
    else{
        T P;
        P=getGCDLCM(b,c,1,n,1);
        if(P.G<P.L)
            cout<<"wins\n";
        else if (P.G>P.L)
            cout<<"loser\n";
        else
            cout<<"draw\n";
    }
 }
return 0;
}