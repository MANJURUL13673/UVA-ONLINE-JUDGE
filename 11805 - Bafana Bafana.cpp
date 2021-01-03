#include<iostream>
using namespace std;
int main()
{
    long int temp,i,a,b,c,m,j,k=0;
    cin>>temp;
    for(i=1;i<=temp;i++){
        cin>>a>>b>>c;
        m=b+c;
        k=k+1;
        for(j=1; ;j++){
            if(m>a){
                m=m-a;
            }
            else{
                break;
            }
        }
        cout<<"Case "<<k<<": "<<m<<endl;
    }
    return 0;
}
