#include<iostream>
using namespace std;
int main()
{
    long int n,r,i,j=0,temp,m,q;
    while(cin>>n>>r){
        j=j+1;
        q=0;
        if(n==0){
            break;
        }
        temp=n-r;
        for(i=1;i<=26;i++){
            m=i*r;
            if(m>=temp){
                q=0;
                break;
            }
            else{
                q=1;
            }
        }
        if(temp<=0){
            cout<<"Case "<<j<<": 0"<<endl;
        }
        else if(temp!=0&&q==0){
            cout<<"Case "<<j<<": "<<i<<endl;
        }
        else if(temp!=0&&q!=0){
            cout<<"Case "<<j<<": impossible"<<endl;
        }
    }
    return 0;
}
