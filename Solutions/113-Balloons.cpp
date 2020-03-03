#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[10]={0};
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a]++;
    }
int max=0;
    for(int i=1;i<=9;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    int cem=0;
     for(int i=1;i<=9;i++){
            cem=cem+arr[i];

    }
    cout<<cem-max;
    return 0;
    }