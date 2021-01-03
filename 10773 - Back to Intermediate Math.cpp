#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    long int n,d,v,u,i;
    double s,p;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d>>v>>u;
        if(u!=0&&u>v){
            s=double(d)/double(u);
            p=double(d)/sqrt((double(u)*double(u))-(double(v)*double(v)));
            cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<p-s<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<"can't determine"<<endl;
        }
    }
    return 0;
}
