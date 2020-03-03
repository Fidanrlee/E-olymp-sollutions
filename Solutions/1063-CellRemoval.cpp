#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

int n,m;
char arr[101][101];
bool visit[101][101];

void go(int x,int y){
    visit[x][y]=1;

        if(x+1<n && y<m && x+1>=0 && y>=0 && visit[x+1][y]==0 && arr[x+1][y]=='#'){
         go(x+1,y);
        }
        if(x-1<n && y<m && x-1>=0 && y>=0 && visit[x-1][y]==0 && arr[x-1][y]=='#'){
         go(x-1,y);
        }
        if(x<n && y+1<m && x>=0 && y+1>=0 && visit[x][y+1]==0 && arr[x][y+1]=='#'){
         go(x,y+1);
        }
        if(x<n && y-1<m && x>=0 && y-1>=0 && visit[x][y-1]==0 && arr[x][y-1]=='#'){
         go(x,y-1);
        }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
             cin>>arr[i][j];
        }
    
            memset(visit,0,sizeof(visit));


  int cem=0;
  for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
             if(visit[i][j]==0 && arr[i][j]=='#'){
                go(i,j);
                 cem++;
             }
        cout<<cem;

return 0;
}