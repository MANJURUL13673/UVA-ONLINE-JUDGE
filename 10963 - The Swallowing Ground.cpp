#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int test;
    int column;
    int i;
    int a,b,far;
    cin>>test;
    int k = test,temp;
    while(test--){
        if(test != k-1){
            cout<<endl;
        }
        temp = 0;
        cin>>column;
        for(i = 0; i < column; i++){
            cin>>a>>b;
            if(i == 0){
                far = a-b;
            }
            if(temp == 0){
                if(far != a-b){
                    temp = 1;
                }
            }
        }
        if(temp == 1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}
