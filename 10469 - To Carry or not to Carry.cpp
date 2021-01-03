#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,i,m,f,j,sum,k;
    while(cin>>a>>b){
        sum=0;
        k=0;
        if(a<0||b<0){
            break;
        }
            for(i=0; ;i++){
                m=a%2;
                f=b%2;
                if(m+f==1){
                    sum=sum+pow(2,i);
                }
                a=a/2;
                b=b/2;
                if(a==0&&b==0){
                    break;
                }
            }
            cout<<sum<<endl;
    }
    return 0;
}
