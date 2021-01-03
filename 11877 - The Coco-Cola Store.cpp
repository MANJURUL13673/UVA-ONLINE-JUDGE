#include<iostream>
using namespace std;
int main()
{
    long long int n,i,f,m;
    while(cin>>n&&n>0){
        m=0;
        for(i=1; ;i++){
            f=n%3;
            n=n/3;
            m=m+n;
            n=n+f;
            if(n<3){
                break;
            }
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
