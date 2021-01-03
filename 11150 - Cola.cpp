#include<iostream>
using namespace std;
int main()
{
    long long int n,i,m,f;
    while(cin>>n&&n>0){
        m=0;
        f=0;
        for(i=1; ;i++){
            m=m+n;
            n=n+f;
            if(n<3){
                break;
            }
            f=n%3;
            n=n/3;
        }
        if(n==2){
            cout<<m+1<<endl;
        }
        else{
            cout<<m<<endl;
        }
    }
    return 0;
}
