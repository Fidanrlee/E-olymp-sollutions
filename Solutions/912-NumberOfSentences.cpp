#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
getline(cin,a);

int n=a.length();
int d=0,i;
for(i=0;i<n;i++)
{
    if(a[i]=='.' || a[i]=='!' ||a[i]=='?'){
         if(a[i-1]!='.' && a[i-1]!='!' && a[i-1]!='?')
        d++;}
}
cout<<d;
return 0;

}