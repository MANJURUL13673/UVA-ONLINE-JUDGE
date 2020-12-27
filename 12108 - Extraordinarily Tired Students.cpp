#include<iostream>
using namespace std;
int main()
{
    int arr[100][10];
    int n;
    int k = 0;
    while(cin>>n){
        k++;
        if(n == 0){
            break;
        }
        cout<<"Case "<<k<<": ";
        for(int i = 0; i<n; i++){
            for(int j = 0; j<3; j++){
                cin>>arr[i][j];
            }
        }
        int sum = 0;
        int i;
        int temp = 1000000;
        for(i = 1; i <= 1000001; i++){
            sum = 0;
            for(int j = 0; j <n; j++){
                if(arr[j][2] <= arr[j][0]+1 && temp <= n/2 && arr[j][0] != -1){
                    arr[j][0] = -1;
                  //  cout<<i<<endl;
                }
              /*  else if(arr[j][2] == arr[j][0] && temp > n/2 && arr[j][0] != -1){
                    arr[j][2]++;
                }   */
                else if(arr[j][2] <= arr[j][0] && arr[j][0] != -1){
                    arr[j][2]++;
                }
                else if(arr[j][2] < (arr[j][0] + arr[j][1]) && arr[j][2] > arr[j][0] && arr[j][0] != -1){
                    arr[j][2]++;
                    sum++;
                }
                else if(arr[j][2] == (arr[j][0] + arr[j][1]) && arr[j][2] > arr[j][0] && arr[j][0] != -1){
                    arr[j][2] = 1;
                    sum++;
                }
            }
           // cout<<sum<<endl;
            temp = sum;
            if(temp == 0){
                break;
            }
        }
        if(i == 1000002){
            cout<<"-1"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
