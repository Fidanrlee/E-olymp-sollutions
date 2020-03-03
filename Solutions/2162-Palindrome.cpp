#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    string a;
  getline(cin,a);
    int n,j=0;
    n=a.length();
    char ar[n];
    for (int i=n-1;i>=0;i--)
    {
        if(a[i]!=' ' && a[i]>=97 &&  a[i]<=122){
        ar[j]=a[i];
        j++;}
    }
    int y=0,f=n-(n-j);
    for (int i=0;i<f;i++)
    {
        if(ar[i]==ar[f-1-i])
            y=1;
       else {
            y=0;
        break;}
    }

    if(y==1)
    cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
