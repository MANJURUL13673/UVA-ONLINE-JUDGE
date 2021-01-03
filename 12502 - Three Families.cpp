#include<iostream>
using namespace std;
int main()
{
    long int n,a,b,i,money;
    double hour,temp,k,sum;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>money;
        hour=((double)a+(double)b)/3;
        temp=(double)a-hour;
        sum=(double)b-hour;
        if(temp>0){
           k=(money*temp)/(temp+sum);
           if(k-(long int)k<0.95){
                cout<<(long int)k<<endl;
           }
           else{
                cout<<(long int)k+1<<endl;
           }
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
