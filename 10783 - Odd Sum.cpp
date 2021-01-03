#include<iostream>
using namespace std;
int main()
{
    long long int n,sum,i,a,b,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        sum=0;
        if(a<=b){
            for(j=a;j<=b;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
        }
        else{
             for(j=b;j<=a;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
