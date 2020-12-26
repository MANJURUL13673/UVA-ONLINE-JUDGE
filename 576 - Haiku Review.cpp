#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char arr[1000];
    int n,i,temp,sum;
    int man,far;
    while(gets(arr)){
        if(!strcmp(arr,"e/o/i")){
            break;
        }
        sum = 0;
        temp = 1;
        n = strlen(arr);
        man = 0;
        for(i = 0; i < n; i++){
            if(arr[i] == '/'){
                if(temp == 1 && sum == 5){
                    temp++;
                    sum = 0;
                }
                else if(temp == 2 && sum == 7){
                    temp++;
                    sum = 0;
                }
            }
            else if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y'){
                while(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y'){
                    i++;
                }
                sum++;
                i = i-1;
            }
            if(i == n-1){
                if(temp == 3 && sum == 5){
                    temp++;
                    sum = 0;
                }
                else{
                    man = 1;
                    cout<<temp<<endl;
                    break;
                }
            }
        }
        if(man == 0){
            cout<<"Y"<<endl;
        }
    }
    return 0;
}
