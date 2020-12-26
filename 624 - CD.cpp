#include<bits/stdc++.h>
using namespace std;

vector<int>solv;
int n,m,temp;

void func(int arr[22],vector<int>rakhbo,int i,int total){
   // cout<<m<<endl;
    if(total > n){
        return;
    }
    if(i >= m){
        if((n - total) >= 0 && (n-total) < temp){
            temp = n-total;
            solv.clear();
            solv = rakhbo;
        }
        return;
    }
    func(arr,rakhbo,i+1,total);
    total += arr[i];
    rakhbo.push_back(arr[i]);
    func(arr,rakhbo,i+1,total);
}

int main()
{
    int arr[22];
    vector<int>keep;
    while(scanf("%d%d",&n,&m) == 2){
        for(int i = 0; i < m; i++){
            cin>>arr[i];
        }
        temp = 10000000;
        for(int i = 0; i < m; i++){
            keep.push_back(arr[i]);
            func(arr,keep,i+1,arr[i]);
            keep.clear();
        }
        int sum = 0;
        for(int i = 0; i < solv.size(); i++){
            cout<<solv[i]<<" ";
            sum += solv[i];
        }
        cout<<"sum:"<<sum<<endl;
        solv.clear();
    }
    return 0;
}
