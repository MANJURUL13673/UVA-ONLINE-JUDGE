#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int arr[22];
    int i;
    int m,f,r,temp;
    while(cin>>a>>b)
    {
        if(a == 0 && b == 0){
            break;
        }
        temp = 0;
        for(i = 0; i < a; i++){
            cin>>arr[i];
        }
        for(i = 0; i < b; i++){
            cin>>m>>f>>r;
            arr[m-1] = arr[m-1]-r;
            arr[f-1] = arr[f-1]+r;
        }
        for(i = 0; i < a; i++){
        //    cout<<arr[i]<<endl;
            if(arr[i] < 0){
                temp = 1;
                break;
            }
        }
        if(temp == 0){
            cout<<"S"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}
