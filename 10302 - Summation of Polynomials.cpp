#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int x=0,n,i;
    while(cin>>n){
        x=0;
        for(i=1;i<=n;i++){
            x=x+pow(i,3);
            cout<<x<<endl;
        }
        cout<<x<<endl;
    }
    return 0;
}
