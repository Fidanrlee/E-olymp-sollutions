#include <iostream>
using namespace std;

int main(){
int m,n1;
cin>>m>>n1;
int arr1[m+1][n1+1];

for (int i=1;i<=m;i++ ){
    for(int j=1;j<=n1;j++){
        cin>>arr1[i][j];
}
}
int q,n2;
cin>>n2>>q;

int arr2[n2+1][q+1];
for (int i=1;i<=n2;i++ ){
    for(int j=1;j<=q;j++){
        cin>>arr2[i][j];
}
}
if(n2!=n1){
    cout<<"-1";
    return 0;
}
int arr3[m+1][q+1];

for (int i=1;i<=m;i++ ){
    for(int j=1;j<=q;j++){
        int r=1;
        arr3[i][j]=0;
    while(r<=n2){
        arr3[i][j]=arr3[i][j]+arr1[i][r]*arr2[r][j];
    r++;
    }
}
}
cout<<m<<" "<<q<<endl;
for (int i=1;i<=m;i++ ){
    for(int j=1;j<=q;j++){
       cout<< arr3[i][j]<<" ";
}
        cout<<endl;
}


return 0;
}