#include <iostream>
#include <stdio.h>
using namespace std;

long long arr[100][100];
long long arr1[100][100];
int n ,m;

void print(int n1,int m1){

    if(m1 == m-1  && n1 == n-1)
        return ;

    if( m1+1<m &&  arr1[n1][m1+1]>=arr1[n1+1][m1]){
     cout<<"R";
        print(n1,m1+1);
    }

    else if( n1+1<n ){
     cout<<"F";
        print(n1+1,m1);
 }
}

int main()
{
	cin>>n>>m;
	for (int i=n-1;i>=0;i--)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];


	for (int i=n-1;i>=0;i--)
    for (int j=m-1;j>=0;j--){

            if(i==n-1 && j==m-1)
             arr1[n-1][m-1]=arr[n-1][m-1];

            else if(i==n-1)
                arr1[i][j]=arr[i][j]+arr1[i][j+1];

            else if(j==m-1)
                arr1[i][j]=arr[i][j]+arr1[i+1][j];

            else if(arr1[i][j+1]>arr1[i+1][j])
                arr1[i][j]=arr[i][j]+arr1[i][j+1];

            else
                arr1[i][j]=arr[i][j]+arr1[i+1][j];
        }


     print(0,0);
}