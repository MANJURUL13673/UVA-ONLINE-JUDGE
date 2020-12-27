#include<iostream>
using namespace std;
int main()
{
    int height,wide;
    int arr[100000],temp,sum,i;
    while(cin>>height>>wide){
        if(height == 0 && wide == 0){
            break;
        }
        for(i = 0; i < wide; i++){
            cin>>arr[i];
        }
        temp = 0,sum = height - arr[0];
        for(i = 1; i < wide; i++){
            if(arr[i-1] > arr[i]){
                sum += arr[i-1]-arr[i];
            }
            if(temp < arr[i]){
                temp = arr[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
