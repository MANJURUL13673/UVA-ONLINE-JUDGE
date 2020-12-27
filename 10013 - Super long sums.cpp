#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num1[1000005];
    char num2[1000005];
    char total[1000005];
    int test;
    cin>>test;
    int m;
    int a;
    int sum;
    while(test){
        a = 0;
        cin>>m;
        for(int i = 0; i < m; i++){
            cin>>num1[i]>>num2[i];
        }
        for(int i = m-1; i >= 0; i--){
            sum = (num1[i] - '0')+(num2[i] - '0')+a;
            if(sum >= 10){
                total[i] = ((sum-10) + '0');
                a = 1;
            }
            else{
                total[i] = (sum + '0');
                a = 0;
            }
        }
        printf("%s\n",total);
        if(test > 1){
            cout<<endl;
        }
        test--;
    }
    return 0;
}
