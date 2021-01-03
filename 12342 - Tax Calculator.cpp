#include<iostream>
using namespace std;
int main()
{
    long long t,i,money,x,y,z,m;
    double j,k,l,r,tax;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>money;
        tax=0;
        x=money-180000;
        if(x>0){
            y=x-300000;
            if(y>0){
                j=300000*0.1;
            }
            else{
                j=x*0.1;
            }
            tax=j;
        }
        if(y>0&&x>0){
            z=y-400000;
            if(z>0){
                k=400000*.15;
            }
            else{
                k=y*.15;
            }
            tax=tax+k;
        }
        if(x>0&&y>0&&z>0){
            m=z-300000;
            if(m>0){
                l=300000*.2;
            }
            else{
                l=z*.2;
            }
            tax=tax+l;
        }
        if(x>0&&y>0&&z>0&&m>0){
            r=m*.25;
            tax=tax+r;
        }
        if(tax<=0){
            cout<<"Case "<<i<<": 0"<<endl;
        }
        else if(tax>0&&tax<2000){
            cout<<"Case "<<i<<": 2000"<<endl;
        }
        else{
            if(((int)tax-tax)==0){
                cout<<"Case "<<i<<": "<<tax<<endl;
            }
            else{
                cout<<"Case "<<i<<": "<<int(tax)+1<<endl;
            }
        }
    }
    return 0;
}
