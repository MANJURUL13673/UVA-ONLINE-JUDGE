#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char c;
    int sum = 0,i;
    while(scanf("%c",&c)){
        if(c == '1'){
            sum = sum+1;
        }
        else if(c == '2'){
            sum = sum+2;
        }
        else if(c == '3'){
            sum = sum+3;
        }
        else if(c == '4'){
            sum = sum+4;
        }
        else if(c == '5'){
            sum = sum+5;
        }
        else if(c == '6'){
            sum = sum+6;
        }
        else if(c == '7'){
            sum = sum+7;
        }
        else if(c == '8'){
            sum = sum+8;
        }
        else if(c == '9'){
            sum = sum+9;
        }
        else{
            if(sum == 0){
                if(c == '!'){
                    cout<<endl;
                }
                else if(c == 'b'){
                    cout<<" ";
                }
                else{
                    cout<<c;
                }
            }
            else{
                for(i = 1; i<=sum; i++){
                    if(c == '!'){
                    cout<<endl;
                    }
                    else if(c == 'b'){
                        cout<<" ";
                    }
                    else{
                        cout<<c;
                    }
                }
            }
            sum = 0;
        }
    }
    return 0;
}
