#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    bool arr[10];
    int a,b,i,carry,temp,sum;
    while(cin>>a>>b){
        if(cin.eof()){
            break;
        }
        sum = 0;
        for(i = a; i <= b; i++){
            memset(arr,false,sizeof(arr));
            temp = i;
            carry = 0;
            while(temp != 0){
                if(arr[temp%10] == true){
                    carry = 1;
                    break;
                }
                else{
                    arr[temp%10] = true;
                }
                temp = temp /10;
            }
            if(carry == 0){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
