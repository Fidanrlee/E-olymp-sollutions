#include <iostream>
using namespace std;
#define ll unsigned long long
ll q[65],a[65],a2[65];

ll f(int n){
if(n==1)
    return 2;

        a[1]=q[1]=1;

    for(int i=2;i<=n;i++){

            q[i]+=a[i-1]+q[i-1]+a2[i-1];
            a[i]+=q[i-1];
            a2[i]+=a[i-1];

    }

    return a2[n]+q[n]+a[n];

}

int main()
{
    int n;
    cin>>n;

    cout<<f(n);

return 0;
}