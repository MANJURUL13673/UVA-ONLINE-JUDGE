#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,m,w,arr[100005];
    cin>>test;
    int i;
    int temp,sum;
    while(test--)
    {
        cin>>m>>w;
        for(i = 0; i < m; i++){
            cin>>arr[i];
        }
        temp = 0;
        sum = 0;
        sort(arr,arr+m);
        for(i = 0; i < m; i++){
            sum += arr[i];
            if(sum > w){
                break;
            }
            temp++;
        }
        cout<<temp<<endl;
    }
    return 0;
}
