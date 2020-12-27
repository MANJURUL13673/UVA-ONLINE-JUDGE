#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    int m,n;
    while(test--){
        scanf("%d%d",&m,&n);
        bool dp[m+1];
        memset(dp,false,sizeof(dp));
        int value[n+1];
        for(int i = 0; i < n; i++){
            scanf("%d",&value[i]);
        }
        dp[0] = true;
        for(int j = 0; j < n; j++){
            for(int i = m; i >= 1; i--){
                if(i >= value[j] && dp[i-value[j]] == true){
                    dp[i] = true;
                }
            }
        }
        if(dp[m] == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
