#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,c,d,l,i,f,m;
    while(cin>>a>>b>>c>>d>>l){
        if(a==0&&b==0&&c==0&&d==0&&l==0){
            break;
        }
        m=0;
        for(i=0;i<=l;i++){
            f=(a*pow(i,2))+(b*i)+c;
            if(f%d==0){
                m=m+1;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
