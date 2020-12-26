#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int arr[400000];
    int n;
    int i,sum;
    int far,man;
    int temp;
    int take;
    int j;
    while(test--){
        cin>>n;
        sum = 0;
        man = 400000;
        far = 0;
        for(i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] > far){
                far = arr[i];
            }
            if(arr[i] < man){
                man = arr[i];
            }
        }
      //  cout<<far<<" "<<man<<endl;
        take;
        temp = 200000005;
        for(i = man; i <= far; i++){
            sum = 0;
            for(j = 0; j < n; j++){
                sum += abs(arr[j] - i);
            }
           // cout<<sum<<endl;
            if(temp > sum){
                temp = sum;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}
