#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long n;
    cin>>n;
    vector <long > v;
    long long a,k;
    for(int j=0;j<n;j++){
        cin>>k;
        for(int i=0;i<k;i++){
        cin>>a;
            v.push_back(a);
        }

    }

   sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );

    cout<<v.size();

return 0;
    }