#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i = 0,j,q,k,sum,temp,a,temp2,p;
    int arr[1025];
    while(cin>>n){
        i++;
        if(n == 0){
            break;
        }
        for(j = 0; j < n; j++){
            cin>>arr[j];
        }
        cout<<"Case "<<i<<":"<<endl;
        cin>>q;
        while(q--){
            cin>>a;
            temp = 1000000000;
            for(j = 0; j < n; j++){
                for(k = j+1; k < n;k++){
                    temp2 = arr[j] + arr[k];
                    if(temp > abs(temp2-a)){
                        temp = abs(temp2-a);
                        p = temp2;
                    }
                }
            }
            cout<<"Closest sum to "<<a<<" is "<<p<<"."<<endl;
        }
    }
    return 0;
}
