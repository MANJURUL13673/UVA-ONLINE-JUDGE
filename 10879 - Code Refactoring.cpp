#include<iostream>
using namespace std;
int main()
{
    long long int n,a,i,sum,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a;
        sum=0;
        for(j=2;j<=a/2;j++){
            if(a%j==0){
                sum=sum+1;
                if(sum==1){
                    cout<<"Case #"<<i<<": "<<a<<" = "<<j<<" * "<<a/j<<" = ";
                }
                else if(sum==2){
                    cout<<j<<" * "<<a/j<<endl;
                }
            }
            if(sum==2){
                break;
            }
        }
    }
    return 0;
}
