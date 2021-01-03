#include<iostream>
using namespace std;
int main()
{
    long long int b1,g1,c1,b2,g2,c2,b3,g3,c3,i,r,m;
    int a[8];
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
        a[0]=b2+b3+c1+c3+g1+g2;
        a[1]=b2+b3+g1+g3+c1+c2;
        a[2]=c2+c3+b1+b3+g1+g2;
        a[3]=c2+c3+g1+g3+b1+b2;
        a[4]=g2+g3+b1+b3+c1+c2;
        a[5]=g2+g3+c1+c3+b1+b2;
        r=a[0];
        m=0;
        for(i=0;i<6;i++){
            if(r>a[i]){
                m=i;
                r=a[i];
            }
        }
        if(m==0){
            cout<<"BCG "<<r<<endl;
        }
        else if(m==1){
            cout<<"BGC "<<r<<endl;
        }
        else if(m==2){
            cout<<"CBG "<<r<<endl;
        }
        else if(m==3){
            cout<<"CGB "<<r<<endl;
        }
        else if(m==4){
            cout<<"GBC "<<r<<endl;
        }
        else if(m==5){
            cout<<"GCB "<<r<<endl;
        }
    }
    return 0;
}
