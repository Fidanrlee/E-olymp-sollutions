#include <iostream>
#include <algorithm>
#include <stdio.h>
#define MAX 100005
#define oo -1e9
using namespace std;
long n;
long arr[MAX],tree[4*MAX];

void build(long node,long l,long r){

   if(l==r){
   tree[node]=arr[l];
   //cout<<node<<" "<<tree[node]<<endl;
   return;
   }

   long mid=(l+r)/2;
   build(2*node,l,mid);
   build(2*node+1,mid+1,r);
   tree[node]=max(tree[2*node],tree[2*node+1]);
   //cout<<node<<" "<<tree[node]<<endl;
}

long Q(long l1,long r1,long l,long r,long node){
   // cout<<l<<" "<<r<<" "<<tree[node]<<endl;
if(r<l1 || r1<l){
return oo;
}
else if (l1<=l && r<=r1){
return tree[node];
}
else {
long a,b,mid=(l+r)/2;
    a=Q(l1,r1,l,mid,2*node);
    b=Q(l1,r1,mid+1,r,2*node+1);
    if(a>b)
    return a;

    return b;
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
long l1,r1;
scanf ("%ld %ld",&l1,&r1);
long d;

if(r1<l1){
d=Q(r1,l1,1,n,1);
printf ("%ld\n",d);
}
else{
d=Q(l1,r1,1,n,1);
printf ("%ld\n",d);
}
}

}
