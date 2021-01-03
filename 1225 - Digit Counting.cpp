#include<iostream>
using namespace std;
int main()
{
    long long int a,n,i,j,r1,r2,r3,r4,r5,r6,r7,r8,r9,m,k,f,r0;
    cin>>a;
    for(i=1; i<=a; i++)
    {
        r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r0=0;
        if(a<=0)
        {
            break;
        }
        cin>>n;
        if(n==0){
            cout<<"1 0 0 0 0 0 0 0 0 0"<<endl;
        }
        else{
        for(j=1; j<=n; j++)
        {
            f=j;
            for(k=1; ; k++)
            {
                m=f%10;
                f=f/10;
                if(m==0){
                    r0=r0+1;
                }
                if(m==1)
                {
                    r1=r1+1;
                }
                else if(m==2)
                {
                    r2=r2+1;
                }
                else if(m==3)
                {
                    r3=r3+1;
                }
                else if(m==4)
                {
                    r4=r4+1;
                }
                else if(m==5)
                {
                    r5=r5+1;
                }
                else if(m==6)
                {
                    r6=r6+1;
                }
                else if(m==7)
                {
                    r7=r7+1;
                }
                else if(m==8)
                {
                    r8=r8+1;
                }
                else if(m==9)
                {
                    r9=r9+1;
                }
                if(f==0){
                    break;
                }
            }
        }
        cout<<r0<<" "<<r1<<" "<<r2<<" "<<r3<<" "<<r4<<" "<<r5<<" "<<r6<<" "<<r7<<" "<<r8<<" "<<r9<<endl;
    }
    }
        return 0;
    }
