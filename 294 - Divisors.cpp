#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int m,r;
    int i,j,sum,temp,temp1,k;
    while(test--){
        cin>>m>>r;
        temp = 0;
        for(i = m; i <= r; i++){
            if(i == 1){
                sum = 1;
            }
            else{
                sum = 2;
            }
            k = sqrt(i);
            for(j = 2; j <= k; j++){
                if(j == k && (j * j) == i){
                    sum += 1;
                }
                else if(i % j == 0){
                    sum += 2;
                }
            }
            if(temp < sum){
                temp = sum;
                temp1 = i;
            }
        }
        cout<<"Between "<<m<<" and "<<r<<", "<<temp1<<" has a maximum of "<<temp<<" divisors."<<endl;
    }
    return 0;
}
