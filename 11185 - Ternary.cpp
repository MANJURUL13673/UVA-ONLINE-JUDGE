#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
    long long int n,r,m,sum,i;
    while(cin>>n){
        sum=0;
        m=1;
        if(n==-1){
            break;
        }
        for(i=0; ;i++){
            r=n%3;
            n=n/3;
            sum=sum+(r*m);
            m=m*10;
            if(n==0){
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
