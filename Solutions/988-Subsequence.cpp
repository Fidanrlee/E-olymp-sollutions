#include <iostream>

using namespace std;

int arr[1000],d[1000];

int main()
{
int n;
cin>>n;

for (int i=0;i<n;i++)    cin>>arr[i];

int mx=1;
for (int i=0;i<n;i++){
        d[i]=1;

        for(int j=0;j<i;j++){
            if(arr[j]<arr[i])
                if(d[i]<d[j]+1)d[i]=d[j]+1;

        }
        if(mx<d[i])
            mx=d[i];
}

cout<<mx;

return 0;
}