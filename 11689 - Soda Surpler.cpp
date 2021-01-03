#include<iostream>
using namespace std;
int main()
{
    long long int t,i,a,b,c,r,m,d,j;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        r=0;
        m=0;
        d=a+b;
        for(j=1; ;j++){
            d=d+r;
            r=d%c;
            d=d-r;
            d=d/c;
            m=m+d;
            if(d==0){
                break;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
