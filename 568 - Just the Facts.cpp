#include<iostream>
using namespace std;
int main()
{
    int n,i,prod,a,test,temp;
    while(cin>>n){
        if(cin.eof()){
            break;
        }
        if(n == 0){
            cout<<1<<endl;
        }
        else{
            prod = 1;
            for(i = 1; i <= n; i++){
                prod = prod*i;
                a = 0;
                while(a == 0){
                    a = prod % 10;
                    prod = prod/10;
                }
               if(i < 10 || i == n){
                  prod = a;
               }
               else if(i < 100){
                    test = 2;
                    temp = a;
                    while(test--){
                        a = prod % 10;
                        temp = (temp*10) + a;
                        prod = prod/10;
                    }
                    cout<<temp<<"man"<<endl;
                    prod = temp;
               }
            }
            cout<<prod<<endl;
        }
    }
    return 0;
}
