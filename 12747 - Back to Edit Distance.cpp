#include<bits/stdc++.h>
using namespace std;

int lcs(int arr[],int n)
{
    vector<int>dp;
    dp.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        int temp = (int)(upper_bound(dp.begin(),dp.end(),arr[i]) - dp.begin());
        if(temp == dp.size()){
            dp.push_back(arr[i]);
        }
    }
    return dp.size();
}
int main()
{
    int test,i,j,arr1[200005],arr2[200005],x,n;
    scanf("%d",&test);
    for(i = 1; i <= test; i++){
        scanf("%d",&n);
        for(j = 0; j < n; j++){
            scanf("%d",&x);
            arr1[x] = j;
        }
        for(j = 0; j < n; j++){
            scanf("%d",&x);
            arr2[j] = arr1[x];
        }
        printf("Case %d: %d\n",i,2*(n-lcs(arr2,n)));
    }
    return 0;
}
