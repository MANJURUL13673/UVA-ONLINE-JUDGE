#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    while((scanf("%d%d%d",&a,&b,&c)) == 3){
        if(a == b && b == c){
            cout<<"*"<<endl;
        }
        else if(a == b && b != c){
            cout<<"C"<<endl;
        }
        else if(b == c){
            cout<<"A"<<endl;
        }
        else if(a == c){
            cout<<"B"<<endl;
        }
    }
    return 0;
}
