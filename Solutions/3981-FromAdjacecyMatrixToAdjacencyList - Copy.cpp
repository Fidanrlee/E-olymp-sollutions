#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#define ll long long
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n][n];
    vector <int > v;

for (int i=0;i<n;i++){
        int cnt=0;
        v.clear();
    for (int j=0;j<n;j++){
        cin>>arr[i][j];

        if(arr[i][j]==1){
              v.push_back(j+1);
            cnt++;}}

          cout<<cnt<<" ";
         copy(v.begin(),v.end()-1,ostream_iterator<int>(cout," "));
         cout<<v.back();
          cout<<endl;
}


return 0;
}