#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char ch[1000000];
    int test;
    char c;
    scanf("%d ",&test);
    for(int i = 1; i <= test; i++){
        gets(ch);
        int n = strlen(ch);
        int man = sqrt(n);
        if(man * man != n){
            cout<<"INVALID"<<endl;
        }
        else{
            for(int j = 0; j < man; j++){
                for(int k = j; k < n; k = k+man){
                    cout<<ch[k];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
