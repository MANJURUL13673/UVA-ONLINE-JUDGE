#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int temp = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            temp = 0;
            break;
        }
    }
    if(temp == 1){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int num,i;
    while(cin>>num){
        if(num == 0){
            break;
        }
        for(i = 3; i <= (num/2); i = i+2){
            int m = prime(i);
            if(m == 1){
                int n = prime(num-i);
                if(n == 1){
                    break;
                }
            }
        }
        cout<<num<<" = "<<i<<" + "<<(num-i)<<endl;
    }
    return 0;
}
