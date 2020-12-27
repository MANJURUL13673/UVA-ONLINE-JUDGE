#include<iostream>

#define max 2000005
using namespace std;
int main()
{
    int n,a[max];
    while(cin>>n){
        if(n==0){
            break;
        }
        int i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int j;
        int temp,far;
        for(i=0;i<n-1;i++){
            temp=i;
            for(j=i+1;j<n;j++){
                if(a[temp]>a[j]){
                    temp=j;
                }
            }
            far=a[i];
            a[i]=a[temp];
            a[temp]=far;
            if(i!=n-1){
                cout<<a[i]<<" ";
            }
        }
        cout<<a[i]<<endl;
    }
    return 0;
}
