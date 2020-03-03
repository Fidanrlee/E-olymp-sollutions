#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
vector <long long> v;

void inst(int x){
    std::vector<long long>::iterator it;
    it= find (v.begin(), v.end(), x);
    if (it!= v.end()) return;
        else v.push_back(x);
}

void dlt(int x){
    std::vector<long long>::iterator it;
    it= find (v.begin(), v.end(), x);
    if (it!= v.end())    v.erase (it);
}

void ext(int x){
    std::vector<long long>::iterator it;
    it= find (v.begin(), v.end(), x);
  //  std::cout << *it << ' ';
    if (it!= v.end())    cout<<"true\n";
    else                cout<<"false\n";
}

int main(){
    string s;
    long long x;
    while(cin>>s){
        if     (s=="insert"){cin>>x; inst(x);}
        else if(s=="exists"){cin>>x; ext(x);}
        else if(s=="delete"){cin>>x; dlt(x);}
    }
return 0;
    }