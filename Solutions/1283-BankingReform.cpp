#include <iostream>
#include <vector>
#define ll long long int
#define M 1000009
using namespace std;

int q[7500][5];

int f (int S[], int m, int n )
{
    if (n == 0) return 1;

    if ( n < 0 )  return 0;

    if ( m <= 0 && n >= 1)   return 0;

    if(q[n][m]!=0) return q[n][m];

    q [n][m]= f( S, m - 1, n ) + f( S, m, n-S[m-1] );

    return q[n][m];
}

int main(){

ll n;
int S[]={1,5,10,25,50};
while(cin>>n){
    cout<<f(S,5,n)<<endl;
}


}
