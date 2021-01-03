#include<iostream>
using namespace std;
int main()
{
    long long int n,sum,i;
    while(cin>>n&&n>=0){
        sum=4;
        if(n==0){
            cout<<1<<endl;
        }
        else if(n==1){
            cout<<2<<endl;
        }
        else if(n==2){
            cout<<4<<endl;
        }
        else{
            for(i=3;i<=n;i++){
                sum=sum+i;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
