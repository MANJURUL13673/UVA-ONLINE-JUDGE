#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,k,v,i,value;
    vector<vector<int> >far;
    while((scanf("%d%d",&n,&m)) == 2){
        far.assign(1000001, vector<int>());
        for(i = 1; i <= n; i++){
            scanf("%d",&value);
            far[value].push_back(i);
        }
        for(i = 1; i <= m; i++){
            scanf("%d%d",&k,&v);
            if(k <= far[v].size()){
                cout<<far[v][k-1]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}
