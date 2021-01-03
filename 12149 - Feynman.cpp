#include<iostream>
using namespace std;
int main()
{
    long int m,r,sum;
    while(cin>>m){
        sum=0;
        if(m==0){
            break;
        }
        for(r=1;r<=m;r++){
            sum=sum+(r*r);
        }
        cout<<sum<<endl;
    }
    return 0;
}
