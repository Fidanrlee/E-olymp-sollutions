#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <string> s1;

void art(string s, int n){

        for(int i=0; i<s1.size();i++){
            if(s<s1[i]){
             s1.insert (s1.begin()+i,s);
            break;
            }
        else if(i==s1.size()-1){
             s1.push_back(s);
            break;
        }
            }
}

int main(){
int n;
string s;
    cin>>n;
cin>>s;
s1.push_back(s);
for(int i=1;i<n;i++){
    cin>>s;
    art(s,n);
}

for(int i=0;i<n;i++)
    cout<<s1[i]<<endl;
return 0;
}