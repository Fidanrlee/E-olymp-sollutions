#include <iostream>

using namespace std;

int arr[100],d[101];

int main()
{
int n;
cin>>n;

for (int i=0;i<n;i++)    cin>>arr[i];

int mx=0;
for (int i=0;i<n;i++){
        if(d[arr[i]]==0){
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i])
                d[arr[i]]++;
        }}
}

for(int i=1;i<=100;i++){

    if(mx<d[i]+d[i+1])
        mx=d[i]+d[i+1];
    }

cout<<mx;

return 0;
}