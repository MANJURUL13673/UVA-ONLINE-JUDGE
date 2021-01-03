#include<iostream>
using namespace std;
int main()
{
    long int t,i,m,j,r,n,q=0;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>m;
        q=q+1;
        r=m/2;
        for(j=1;j<=m;j++){
            cin>>n;
            if(j==(r+1)){
                cout<<"Case "<<q<<": "<<n<<endl;
            }
        }
    }
    return 0;
}
