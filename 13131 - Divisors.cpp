#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k;
    int test;
    cin>>test;
    int sum;
    int a,i;
    while(test--){
        cin>>n>>k;
        sum = 0;
        for(i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                a = n / i;
                if (i != a){
                    if(i % k != 0){
                        sum += i;
                    }
                    if(a % k != 0){
                        sum += a;
                    }
                }
                else{
                    if(a % k != 0){
                        sum += a;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
