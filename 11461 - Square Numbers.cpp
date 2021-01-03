#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,i,m,sum;
    double r;
    while(cin>>a>>b&&a>0&&b>0){
        sum=0;
        for(i=a;i<=b;i++){
            r=sqrt(i);
            m=sqrt(i);
            if(r==double(m)){
              sum=sum+1;
            }
        }
    cout<<sum<<endl;
    }
    return 0;
}
