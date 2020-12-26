#include<bits/stdc++.h>
using namespace std;

bool check(long long int a)
{
    bool arr[10];
    memset(arr,false,sizeof(arr));
    while(a != 0){
        if(arr[a%10] == true){
            return false;
        }
        else{
            arr[a%10] = true;
        }
        a /= 10;
    }
    return true;
}
int main()
{
    int test;
    long long int n;
    scanf("%d",&test);
    while(test--){
        scanf("%lld",&n);
        for(long long int i = 1; (n*i) <= 9876543210; i++){
            if(check(i) && check(n*i)){
                printf("%lld / %lld = %lld\n",n*i,i,n);
            }
        }
        if(test != 0){
            cout<<endl;
        }
    }
    return 0;
}
