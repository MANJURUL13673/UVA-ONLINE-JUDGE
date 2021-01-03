#include<iostream>
using namespace std;
int main()
{
    long long int n,c,i;
    while(cin>>n&&n>0){
        c=n;
        if(n<=100){
            for(i=1; ;i++){
                if(n<=100){
                    n=n+11;
                    if(n>=101){
                        n=n-10;
                        if(n>=101){
                            n=n-1;
                            break;
                        }
                    }
                }
                else{
                    n=n-10;
                }
                cout<<n<<endl;
                if(n-10>=101){
                    break;
                }
            }
        }
        else{
            n=n-10;
        }
        cout<<"f91("<<c<<") = "<<n<<endl;
    }
    return 0;
}
