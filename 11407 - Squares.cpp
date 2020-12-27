#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j;
    int arr[10002];
    memset(arr,0,sizeof(arr));
    for(i = 1; i <= 10000; i++){
        for(j = 1; (j * j) <= i; j++){
            if((i - (j * j)) == 0){
                arr[i] = 1;
            }
            else{
                if(arr[i] == 0){
                    arr[i] = 1+arr[i-(j*j)];
                }
                else{
                    arr[i] = min(arr[i],1+arr[i-(j*j)]);
                }
            }
        }
    }
    int n;
    cin>>test;
    while(test--){
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
