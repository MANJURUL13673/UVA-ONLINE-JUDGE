//md. manjurul haque
//Electronics and communication Engineering,KUET
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100000];
    int i;
    int temp;
    while(cin>>n && n != 0){
        for(i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        temp = 0;
        for(i = 0; i < n; i++){
            if(i == 0){
                if(arr[i] - 0 > 200){
                    temp = 1;
                    break;
                }
            }
            else if(i == (n-1)){
                if((2 * (1422 - arr[i])) > 200){
                    temp = 1;
                    break;
                }
            }
            else{
                if(arr[i] - arr[i-1] > 200){
                    temp = 1;
                    break;
                }
            }
        }
        if(temp == 0){
            cout<<"POSSIBLE"<<endl;
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}
