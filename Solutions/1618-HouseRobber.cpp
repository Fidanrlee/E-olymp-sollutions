#include <iostream>
#include <vector>
#define ll long long int
#define M 1000009
using namespace std;

ll arr[M], q[M], n;

ll f (ll k)
{
    if (k>=n) return 0;
    if (q[k]!=0) return q[k];

    ll a,b,ans;
        a=f(k+2);
        b=f(k+3);

        ans=b ;
      if(ans<a) ans=a;

    q[k]=arr[k]+ans;
    return q[k];
}

int main(){

cin>>n;
for (ll i=0;i<n;i++)    cin>>arr[i];

ll a,b;
a=f(0);
b=f(1);

if(a>b) cout<<a;
else cout<<b;

return 0;
}