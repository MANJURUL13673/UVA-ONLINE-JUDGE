#include<iostream>
using namespace std;
int main()
{
    int x,y,prod,i,a,b,j,sum,c,r,temp,f,m,l,p,d,q,z=0;
    while(cin>>x>>y&&x!=0&&y!=0){
        r=0;
        l=0;
        m=1;
        p=0;
        z=z+1;
        temp=x;
        prod=x*y;
        a=prod-1;
        c=2*(x-1);
        cout<<"Triangular Museum "<<z<<endl;
        //cout<<c<<endl;
        for(i=1;i<=prod;i++){
            b=2*(i-1);
            sum=a+b+2;
            f=c;
            for(j=1;j<=sum;j++){
                if(j==a+1){
                    cout<<"/";
                }
                else if(j==sum){
                    cout<<"\\";
                }
                else if(b>=c&&j>a+1){
                    if(r>0&&i==temp){
                        m=1;
                        l=0;
                        if(j==a+f+2){
                            cout<<"\\";
                        }
                        else if(j==a+f+3){
                            cout<<"/";
                            f=f+c+2;
                        }
                        else{
                            cout<<"_";
                        }
                    }
                    else if((r==0&&i==temp)){
                        cout<<"_";
                        m=1;
                        l=0;
                    }
                    else if(i!=temp){
                       if(j==a+1+m&&l==0){
                            cout<<"\\";
                            m=m+p+1;
                           // cout<<m<<endl;
                            l=l+1;
                       }
                       else if(j==a+1+m&&l==1){
                            cout<<"/";
                            m=m+q+1;
                            l=l-1;
                       }
                        else{
                            cout<<" ";
                        }
                    }
                }
                else if(b<c||j<=a){
                    cout<<" ";
                }
            }
            if(i==temp){
                p=c;
                q=0;
            }
            else if(i<temp&&i>x){
                p=p-2;
               // cout<<p<<endl;
               // cout<<m<<endl;
                q=q+2;
                m=1+q;
               // cout<<q<<endl;
            }
            if(i==temp){
                temp=temp+x;
                r=r+1;
            }
            a=a-1;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
