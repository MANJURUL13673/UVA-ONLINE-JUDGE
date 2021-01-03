#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,sum,i;
    while(cin>>a>>b&&a>0&&b>0){
        sum=0;
        for(i=a; ;i++){
            sum=sum+i;
            if(sum>=b){
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}
