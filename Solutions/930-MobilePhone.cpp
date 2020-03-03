#include <iostream>
#include <string>
using namespace std;
int arr[10];
int main(){
    string a;
    getline(cin,a);
    int n=a.length();
    int d=0;
    for (int i=0;i<n;i++)
    {
        int t=(a[i]);
        if(t>=48 && t<=57)
        for(int j=48;j<=57;j++)
            if(a[i]==j)
            arr[j-48]++;
    }
    for(int j=0;j<10;j++)
        {
           if(arr[j]==0)
            d++;
        }
    cout<<d<<endl;
        for(int j=0;j<10;j++)
        {
           if(arr[j]==0)
            cout<<j<<" ";
        }
    return 0;
}