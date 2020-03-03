#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
	while(cin>>n){

	long cem[n],eyni[n],ferqli[n];
	cem[0]=3;
	cem[1]=9;
	eyni[0]=1;
	eyni[1]=1;
	ferqli[0]=0;
	ferqli[1]=2;

	for (int i=2;i<n;i++){
        ferqli[i]=2*ferqli[i-1]+ferqli[i-2];
        eyni[i]=cem[i-1]/3;
        cem[i]=(eyni[i]+ferqli[i])*3;
	}

cout<<cem[n-1]<<endl;}
}