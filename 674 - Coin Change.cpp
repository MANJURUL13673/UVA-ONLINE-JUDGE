#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int coin[7] = {1,5,10,25,50};
    int arr[8000];
    int n,i,j;
    while((scanf("%d",&n)) == 1){
        memset(arr,0,sizeof(arr));
        arr[0] = 1;
        for(i = 0; i < 5; i++){
            for(j = 1; j <= n; j++){
                if(j >= coin[i]){
                    arr[j] += arr[j-coin[i]];
                }
            }
        }
        cout<<arr[n]<<endl;
    }
    return 0;
}
