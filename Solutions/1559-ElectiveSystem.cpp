#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define ll long long int
using namespace std;
int q[1001],d,S,k,q1[1001][1001];

void fk(string s){
        for (int i=0;i<=S-d;i++)
        for(int j=i;j<i+d;j++){
            q[i]=q[i]+s[j]-96;
        }
}

int f (int i,int n)
{
        if(n==0)    return 0;
        if(q1[i][n]!=0) return q1[i][n];
        int M=0;

        for(int j=i+d;j<=S-(n-1)*d;j++){
            int y=f(j,n-1);
            if(M<y)   M=y;
            }

    q1[i][n]=M+q[i];
    return q1[i][n];
}

int main(){

        while(cin>>d){

        memset(q, 0, sizeof q);
        memset(q1, 0,sizeof q1);

        string s;
        cin>>k>>s;
        S=s.size();

        fk(s);
        int M=0;
        for(int i=0;i<=S-k*d+1;i++){

            int y=f(i,k);
            if(M<y)    M=y;
}
      cout<<M<<endl;
}

return 0;
}