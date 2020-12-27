#include<iostream>
using namespace std;
int main()
{
    int n,i,j,p,q,r,a[40],temp,k,sum;
    cin>>n;
    for(i=1;i<=n;i++){
        sum=0;
        cin>>r>>p>>q;
        for(j=0;j<r;j++){
            cin>>a[j];
        }
        for(j=0;j<r-1;j++){
            for(k=0;k<r-1;k++){
                if(a[k]>a[k+1]){
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
          //  cout<<a[r-1]<<endl;
          //  cout<<1<<endl;
        }
        for(j=0;j<r;j++){
            sum=sum+a[j];
            if(sum>q){
                break;
            }
            if(j+1>p){
                break;
            }
        }
        cout<<"Case "<<i<<": "<<j<<endl;
    }
    return 0;
}
