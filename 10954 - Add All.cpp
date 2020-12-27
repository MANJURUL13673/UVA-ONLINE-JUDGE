#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[5003];
    int n;
    long long int arr1[5003];
    while(scanf("%d",&n)){
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
        for(int i = 1; i < n; i++){
            if(i == 1){
                arr1[i - 1] = arr[i - 1] + arr[i];
            }
            else{
                arr1[i - 1] = arr1[i - 2] + arr[i];
            }
        }
        long long int sum = 0;
        for(int i = 0; i < (n - 1); i++){
            sum = sum + arr1[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
