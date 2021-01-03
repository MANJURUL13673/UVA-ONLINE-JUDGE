#include<iostream>
using namespace std;
int main()
{
    long long int a,b,i,f,m,sum;
    while(cin>>a>>b&&a!=0&&b!=0){
        sum=0;
        for(i=1; ;i++){
            f=a%10;
            m=b%10;
            if(f+m>=10){
                sum=sum+1;
                m=m+1;
            }
            a=a/10;
            b=b/10;
            if(a==0&&b==0){
                break;
            }
        }
        if(sum==0){
            cout<<"No carry operation."<<endl;
        }
        else if(sum==1){
            cout<<sum<<" carry operation."<<endl;
        }
        else{
            cout<<sum<<" carry operations."<<endl;
        }
    }
    return 0;
}
