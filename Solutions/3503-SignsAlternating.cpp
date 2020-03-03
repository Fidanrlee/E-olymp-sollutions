#include <iostream>
#include <stdio.h>
int n;

void al(int a,int b,int c,int *arr){
if(a==0)
    arr[b]=c;
else{
    int cem=arr[b];
    int k=0;
        for(int i=b+1;i<=c;i++){
                if(k%2==0)
            cem=cem-arr[i];
                else
                    cem=cem+arr[i];
            k++;
        }
printf ("%d\n",cem);}


return;
}


int main()
{
  std::ios::sync_with_stdio(false);
scanf ("%d",&n);
int arr[n];
    for(int i = 1; i <=n; i++){
     scanf ("%d",&arr[i]);
    }

    int m;
    scanf ("%d",&m);
    for(int i = 0; i < m; i++){
      int a,b,c;
      scanf ("%d %d %d",&a,&b,&c);
      al(a,b,c,arr);
    }
    return 0;
}