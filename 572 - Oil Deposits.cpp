#include<bits/stdc++.h>
using namespace std;

int grid[105][105];

void solve(char arr[105][105],int total,int m,int n,int i,int j){
    if(i < 0 || j < 0 || i >= m || j >= n){
        return;
    }
    if(arr[i][j] != '@' || grid[i][j] != 0){
        return;
    }
    grid[i][j] = total;
    solve(arr,total,m,n,i+1,j);
    solve(arr,total,m,n,i-1,j);
    solve(arr,total,m,n,i,j+1);
    solve(arr,total,m,n,i,j-1);
    solve(arr,total,m,n,i+1,j+1);
    solve(arr,total,m,n,i+1,j-1);
    solve(arr,total,m,n,i-1,j+1);
    solve(arr,total,m,n,i-1,j-1);
}
int main()
{
 //   freopen("output.txt","w",stdout);
    char arr[105][105];
    int m,n;
    while(true){
        cin>>m>>n;
        if(m == 0 || n == 0){
            break;
        }
        memset(grid,0,sizeof(arr));
        int total = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin>>arr[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] == '@' && grid[i][j] == 0){
                    total++;
                    solve(arr,total,m,n,i,j);
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
