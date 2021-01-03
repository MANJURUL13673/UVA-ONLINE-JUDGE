#include<iostream>
using namespace std;
int main()
{
    long long int a,b,i;
    double prod;
    while(cin>>a>>b&&a!=0&&b!=0){
        prod=1;
        for(i=1;i<=a;i++){
            prod=prod*i;
            if(i<=a-b){
                prod=prod/i;
            }
            if(i<=b){
                prod=prod/i;
            }
        }
        cout<<a<<" things taken "<<b<<" at a time is "<<prod<<" exactly."<<endl;
    }
    return 0;
}
