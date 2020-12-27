#include<bits/stdc++.h>
using namespace std;

int func(int n)
{
    int sum = 0;
    while(n != 0){
        sum = sum + pow((n%10),2);
        n = n/10;
    }
    return sum;
}
int main()
{
 //   freopen("input.txt","r",stdin);
    int test;
    cin>>test;
    int n;
    for(int k = 1; k <= test; k++){
        cin>>n;
        int p = n;
        int temp = 0;
        for(int i = 1; i <= 100000; i++){
            if(n == 1){
                temp = 1;
                break;
            }
            n = func(n);
       //     cout<<n<<endl;1
        }
        if(temp == 1){
            printf("Case #%d: %d is a Happy number.\n",k,p);
        }
        else{
            printf("Case #%d: %d is an Unhappy number.\n",k,p);
        }
    }
    return 0;
}
