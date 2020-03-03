#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int h1,d1,s1;
    cin>>h1>>d1>>s1;
    int h2,d2,s2;
    cin>>h2>>d2>>s2;
    int h,d,s;
    if(s2>s1)
        s=s2-s1;
    else{
        s=s2-s1+60;
        d2-=1;
    }

       if(d2>d1)
        d=d2-d1;
    else{
        d=d2-d1+60;
        h2-=1;
    }
    h=h2-h1;
    cout<<h<<" "<<d<<" "<<s;


    return 0;
    }