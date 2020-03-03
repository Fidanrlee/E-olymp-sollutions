#include <iostream>
#include <string>
#include <algorithm>
#define ll unsigned long long
using namespace std;

ll factorial(ll n)
{
    if(n == 1 || n == 0)
  return 1;
       return factorial(n - 1) * n;
}

int main()
{
    string s;
    cin>>s;
    int arr[s.size()];
     ll a=1,b=1;
     a=factorial(s.size());
    for(int i=0;i<s.size();i++){
            arr[i]=1;
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j] && s[i]!='*'){
                s[j]='*';
                arr[i]++;
            }
        }
    }

  //  int M=0;
    for(int j=0;j<s.size();j++){
            if(arr[j]!=1){
                b=b*factorial(arr[j]);
            }
    }

    ll ans=0;
    ans=a/b;
        cout<<ans;
return 0;
}