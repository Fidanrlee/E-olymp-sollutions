#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
  getline(cin,a);
    int n=a.length();
    int c=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]==' ' && a[i-1]!=' ')
        c++;
if(a[i]=='-' && a[i-1]!='-' )
c++;
   }
   cout<<c+1;
    return 0;
}