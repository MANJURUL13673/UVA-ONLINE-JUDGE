#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,i,r,m;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n){
        if(n==0){
            break;
        }
        r=0;
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                r=r+i;
            }
        }
        m=r+1;
        if(m==n&&n!=1&&n!=2&&n!=3){
            cout<<setw(5)<<n<<"  PERFECT"<<endl;
        }
        else if(m<n||n==1||n==2||n==3){
            cout<<setw(5)<<n<<"  DEFICIENT"<<endl;
        }
        else if(m>n){
            cout<<setw(5)<<n<<"  ABUNDANT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
