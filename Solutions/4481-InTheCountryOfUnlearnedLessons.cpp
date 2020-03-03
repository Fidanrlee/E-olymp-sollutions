#include <iostream>
#include <algorithm>
#include <stdio.h>
#define MAX 100005
#define oo -1e9
using namespace std;
long n;
long arr[MAX],tree[4*MAX];

long  GCD(long  a, long b){
   long r ;
   if(a>b){
  while(b!=0){
    r = a % b;
    a = b;
    b= r;
  }
  return a;}
  else{
      while(a!=0){
    r = b % a;
    b = a;
    a = r;
  }
   return b;
  }
}


void build(long node,long l,long r){
   if(l==r){
   tree[node]=arr[l];
   return;
   }
   long mid=(l+r)/2;
        build(2*node,l,mid);
        build(2*node+1,mid+1,r);
        tree[node]=GCD(tree[2*node],tree[2*node+1]);
}

long getGCD (long l1,long r1,long l,long r,long node){
if(r<l1 || r1<l){
return 0;
}
else if (l1<=l && r<=r1){
return tree[node];
}
else {
long a,b,mid=(l+r)/2;
    if(mid>=l1 || r1>=l)
    a=getGCD(l1,r1,l,mid,2*node);
    b=a;
    if(r>=l1 || r1>=mid+1)
    b=getGCD(l1,r1,mid+1,r,2*node+1);

    return GCD(a,b);
}
}

void update(long node, long L, long R, long Pos, long Val)
{
	if(L==R && R==Pos )
        tree[node]=Val;
    else{
            int mid=(L+R)/2;
        if(Pos >=L && Pos<=mid)
            update(node*2,L,mid,Pos,Val);
        else if(Pos >=mid+1 && Pos<=R)
            update(node*2+1,mid+1,R,Pos,Val);
        tree[node]=GCD(tree[node*2],tree[node*2+1]);
    }
}

int main()
{
//ios_base::sync_with_stdio(false);
scanf ("%ld",&n);

for(long i=1;i<=n;i++){
scanf ("%ld",&arr[i]);
}

build(1,1,n);
long m;
scanf ("%ld",&m);

for(long i=1;i<=m;i++){
long l1,r1,a;
scanf ("%ld %ld %ld",&a,&l1,&r1);
long d;
if(a==2)
    update(1,1,n,l1,r1);
else{
if(r1<l1){
d=getGCD(r1,l1,1,n,1);
printf ("%ld\n",d);
}
else{
d=getGCD(l1,r1,1,n,1);
printf ("%ld\n",d);
}
}
}
}