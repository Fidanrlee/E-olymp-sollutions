#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long n;
    cin>>n;
    vector <long > v;
    long long a;
    for(int i=0;i<n;i++){
        cin>>a;
            v.push_back(a);
        }


   sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );

    cout<<v.size();

return 0;
    }