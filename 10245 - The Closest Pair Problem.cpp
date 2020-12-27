#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double arr1[10005],arr2[10005];
    int n;
    int i,j;
    double temp,x;
    while(cin>>n){
        if(n == 0){
            break;
        }
        for(i = 0; i < n; i++){
            cin>>arr1[i]>>arr2[i];
        }
        temp = 10000;
        for(i = 0; i < n; i++){
            for(j = i+1; j < n; j++){
                if(i != j){
                    x = sqrt(pow((arr1[i]-arr1[j]),2)+pow((arr2[i]-arr2[j]),2));
                    if(temp > x){
                        temp = x;
                    }
                }
            }
        }
        if(temp == 10000){
            cout<<"INFINITY"<<endl;
        }
        else{
            cout<<fixed<<setprecision(4)<<temp<<endl;
        }
    }
    return 0;
}
