#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int f,m,j,i,n,sum,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>m;
        f=sqrt(m*2);
        k=(m*2)-f;
        if(k<(f*f)){
            cout<<f-1<<endl;
        }
        else{
            cout<<f<<endl;
        }
    }
    return 0;
}
