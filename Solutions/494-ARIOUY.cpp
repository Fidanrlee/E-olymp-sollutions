#include <iostream>
#include <string>
using namespace std;
int main(){
    int k=0;
    string a;
  getline(cin,a);
    int n=a.length();
    for (int i=0;i<n;i++)
    {
if(a[i]=='A' || a[i]=='E'  || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y' ||a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
                k++;
    }
   cout<<k;
    return 0;
}