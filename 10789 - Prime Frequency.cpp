#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;
bool prime(int n)
{
    if(n == 0 || n == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[150];
    int k;
    scanf("%d ",&k);
    string ch;
    int temp;
    for(int i = 1; i <= k; i++){
        cin>>ch;
        cout<<"Case "<<i<<": ";
        temp = 0;
        memset(arr,0,sizeof(arr));
        int n = ch.length();
        for(int j = 0; j < n; j++){
            arr[ch[j]]++;
        }
        for(int j = 0; j < 140; j++){
            bool far = prime(arr[j]);
            if(far == true){
                printf("%c",j);
                temp = 1;
            }
        }
        if(temp == 0){
            cout<<"empty";
        }
        cout<<endl;
    }
    return 0;
}
