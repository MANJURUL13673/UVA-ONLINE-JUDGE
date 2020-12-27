#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int n,q,arr[100005],a,pos = 0,low,high,mid,temp;
    while(cin>>n>>q && n!=0 && q!=0){
        pos++;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cout<<"CASE# "<<pos<<":"<<endl;
        sort(arr,arr+n);
        for(int i = 0; i < q; i++){
            cin>>a;
            low = 0;
            high = n-1;
            temp = 0;
            while(low <= high){
                mid = (low+high)/2;
                if(arr[mid] == a){
                    temp = 1;
                    break;
                }
                else if(arr[mid] > a){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            if(temp == 1){
                while(mid >= 0){
                    if(mid == 0){
                        break;
                    }
                    if(arr[mid-1] == a){
                        mid--;
                    }
                    else{
                        break;
                    }
                }
                cout<<a<<" found at "<<mid+1<<endl;
            }
            else{
                cout<<a<<" not found"<<endl;
            }
        }
    }
    return 0;
}
