#include<iostream>
using namespace std;


int main (){
int x1,x2,y1,y2,r1,r2;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    if(x2-x1<0){
        x1=x1*(-1);
        x2=x2*(-1);}
    if(y2-y1<0){
        y1=y1*(-1);
        y2=y2*(-1);}
    if(x1==x2 &&y1==y2 &&r1==r2)
        cout<<"-1";
    else if(x2-x1>r2+r1 ||y2-y1>r2+r1)
        cout<<"0";
    else if(x2-x1==r2+r1 ||y2-y1==r2+r1)
        cout<<"1";
    else
        cout<<"2";
    return 0;
}