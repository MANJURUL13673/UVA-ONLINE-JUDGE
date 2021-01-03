#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    long int t,n,a[10000],i,j;
    double sum,avg;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        sum=0;
        avg=0;
        for(j=0;j<n;j++){
            cin>>a[j];
            sum=sum+a[j];
        }
        sum=sum/n;
        for(j=0;j<n;j++){
            if(a[j]>sum){
                avg=avg+1;
            }
        }
        avg=(avg/n)*100;
        cout<<fixed<<setprecision(3)<<avg<<"%"<<endl;
    }
    return 0;
}
