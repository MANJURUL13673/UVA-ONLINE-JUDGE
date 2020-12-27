#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[100000];
    int a;
    int top = 0,i;
    while(scanf("%d",&a) == 1){
        if(top == 0){
            arr[top] = a;
        }
        else{
            for(i = top - 1; i >= 0; i--){
                if(arr[i] > a){
                    arr[i+1] = arr[i];
                    if(i == 0){
                        arr[i] = a;
                        break;
                    }
                }
                else{
                    arr[i+1] = a;
                    break;
                }
            }
        }
        if(top % 2 != 0){
            printf("%d\n",((arr[top/2]+arr[top/2+1]) / 2));
        }
        else{
            printf("%d\n",arr[top/2]);
        }
        top++;
       // cout<<top<<endl;
    }
    return 0;
}
