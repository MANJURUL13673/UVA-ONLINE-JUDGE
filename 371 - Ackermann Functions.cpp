#include<iostream>
using namespace std;
int main()
{
    long long int m,n,i,r,sum,temp,k,j;
    while(cin>>m>>n){
        if(m==0&&n==0){
            break;
        }
        temp=0;
        if(m<=n){
        for(i=m;i<=n;i++){
            r=i;
            sum=0;
            for(j=1; ;j++){
                if(r%2==0){
                    r=r/2;
                    sum=sum+1;
                }
                else{
                    r=(3*r)+1;
                    sum=sum+1;
                }
                if(r==1){
                    break;
                }
            }
            if(temp<sum){
                temp=sum;
                k=i;
            }
        }
        cout<<"Between "<<m<<" and "<<n<<", "<<k<<" generates the longest sequence of "<<temp<<" values."<<endl;
        }
        else{
            for(i=n;i<=m;i++){
            r=i;
            sum=0;
            for(j=1; ;j++){
                if(r%2==0){
                    r=r/2;
                    sum=sum+1;
                }
                else{
                    r=(3*r)+1;
                    sum=sum+1;
                }
                if(r==1){
                    break;
                }
            }
            if(temp<sum){
                temp=sum;
                k=i;
            }
        }
        cout<<"Between "<<n<<" and "<<m<<", "<<k<<" generates the longest sequence of "<<temp<<" values."<<endl;
        }
    }
    return 0;
}
