#include <iostream>
#include <list>
#include <string.h>

using namespace std;
 int dis[101];
int main(){

int n,a,b;
cin>>n>>a>>b;
int arr[101][101];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>arr[i][j];

    list <int > que;
    que.push_back(a);


    while(!que.empty()){
        int s=que.front();

        if(s==b){
             cout<<dis[s];
             return 0;
        }
        for(int i=1;i<=n;i++)
            if(arr[s][i]==1 && dis[i]==0){
                dis[i]=dis[s]+1;
                que.push_back(i);
            }
         que.pop_front();
    }
cout << "0\n";
	return 0;
return 0;
}