#include<bits/stdc++.h>
using namespace std;
long prime(long n)
{
    for(long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    long n,m,f,sum;
    while(cin>>n){
        if(n == 0){
            break;
        }
        sum = 0;
        for(long i = 2; i <= (n/2); i++){
            m = prime(i);
            if(m == 1){
                f = prime(n-i);
                if(f == 1){
                    sum = sum+1;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
