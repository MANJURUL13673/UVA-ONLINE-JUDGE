#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    int test,day,i,a,p,j;
    int arr[4000];
    cin>>test;
    while(test--){
        cin>>day>>p;
        bool arr[day+1];
        memset(arr,false,sizeof(arr));
        for(i = 0; i < p; i++){
            cin>>a;
            for(j = a; j <= day; j=j+a){
                arr[j] = true;
            }
        }
        int sum = 0;
        for(i = 1; i <= day; i++){
            if(arr[i] == true && i % 7 != 6 && i % 7 != 0){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
