#include<bits/stdc++.h>
using namespace std;
int main()
{
 //   freopen("output.txt","w",stdout);
    long long int coin[20] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
    long long int arr[30005];
    memset(arr,0,sizeof(arr));
    arr[0] = 1;
    int i,j;
    for(i = 0; i < 11; i++){
        for(j = 1; j <= 30000; j++){
            if(j >= coin[i]){
                arr[j] += arr[j-coin[i]];
            }
        }
    }
    float n;
    while(cin>>n){
        if(n == 0.00){
            break;
        }
        float f = n * 100;
        int k = (int)(f+0.5);
     //   cout<<k<<endl;
        long long int d = arr[k];
        int digit = 0;
        while(d != 0){
            d = d/10;
            digit++;
        }
        int p = k;
  //      cout<<arr[k]<<endl;
        int coun= 0;
        while(p != 0){
            coun++;
            p = p/10;
        }
   //     cout<<arr[k]<<endl;
        if(coun <= 3){
            cout<<"  ";
        }
        else if(coun == 4){
            cout<<" ";
        }
        cout<<fixed<<setprecision(2)<<n;
   //     cout<<arr[k]<<endl;
        for(i = 1; i <= (17-digit); i++){
            cout<<" ";
        }
        cout<<arr[k]<<endl;
    }
    return 0;
}
