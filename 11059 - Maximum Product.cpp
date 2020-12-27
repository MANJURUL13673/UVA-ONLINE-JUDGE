#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,arr[100],value,k = 0,temp,prod,prod1,far;
    while((scanf("%lld",&n)) == 1){
        for(int i = 0; i < n; i++){
            scanf("%lld",&arr[i]);
        }
        k++;
        temp = 0;
        for(int i = 0; i < n; i++){
            prod = 1;
            value = 1;
            for(int j = i; j < n; j++){
                far  = 0;
                if(arr[j] == 0){
                    break;
                }
                else if(value < 0 && arr[j] < 0){
                    prod *= value * arr[j];
                    value = 1;
                    far = 1;
                }
                else if(arr[j] > 0){
                    prod *= arr[j];
                }
                if(value > 0 && arr[j] < 0 && far != 1){
                    value = arr[j];
                    prod1 = prod;
                }
            }
            if(value < 0){
                prod = prod1;
            }
            if(temp < prod){
                temp = prod;
            }
        }
        printf("Case #%lld: The maximum product is %lld.",k,temp);
        printf("\n\n");
    }
    return 0;
}
