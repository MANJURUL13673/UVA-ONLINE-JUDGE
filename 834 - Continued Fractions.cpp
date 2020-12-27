#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    double a,b,sum;
    while(cin>>a>>b){
        if(cin.eof()){
            break;
        }
        sum = a/b;
        printf("[%lld",(long long int)sum);
        sum = sum - (long long int)sum;
        if(sum > 0.000001){
            printf(";");
        }
        while(sum >= 0.00001){
            sum = 1.0 / sum;
            if(sum - (long long int)sum > 0.999){
                printf("%lld",(long long int)sum+1);
                break;
            }
            else if(sum - (long long int)sum < 0.00001){
                printf("%lld",(long long int)sum);
                break;
            }
            else{
                printf("%lld,",(long long int) sum);
            }
            sum = sum - (long long int)sum;
        }
        printf("]\n");
    }
    return 0;
}
