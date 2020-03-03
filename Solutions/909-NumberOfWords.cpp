#include <iostream>
#include <string>
using namespace std;
int main(){
string a;
getline(cin,a);
int n=a.length();
int d=0;
for(int i=0;i<n;i++){
if(a[i]==' ' && a[i-1]!=' ')
d++;
}
cout<<d+1;
return 0;
}