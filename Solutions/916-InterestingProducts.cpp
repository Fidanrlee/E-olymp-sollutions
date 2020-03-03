#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int > v;
    int a1,b1,c1,d1;
    cin>>a1>>b1>>c1>>d1;
    int a,b,c,d;

    if(a1<b1){a=a1;b=b1;}
    else     {b=a1;a=b1;}

    if(c1<d1){c=c1;d=d1;}
    else     {d=c1;c=d1;}

    for(int i=a;i<=b;i++){
        for(int j=c;j<=d;j++){
            v.push_back(i*j);
        }
    }

   sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );

    cout<<v.size();

return 0;
    }