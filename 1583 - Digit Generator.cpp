#include<iostream>
using namespace std;
void mod(int n,int m)
{
    int sum = 0;
    int far;
    for(int i = m; i < n; i++){
        sum = i;
        far = i;
        for(int p = 0; ; p++){
            sum = sum + (far % 10);
            far = far/10;
            if(far == 0){
                break;
            }
        }
        if(sum == n){
            cout<<i<<endl;
            return;
        }
    }
    cout<<0<<endl;
}
int main()
{
    int test;
    cin>>test;
    int n;
    for(int i = 1; i<=test; i++){
        cin>>n;
        if(n <= 10){
            mod(n,1);
        }
        else if(n <= 20){
            mod(n,6);
        }
        else if(n <= 100){
            mod(n,n - 18);
        }
        else if(n <= 1000){
            mod(n,n - 27);
        }
        else if(n <= 10000){
            mod(n,n - 36);
        }
        else if(n <= 100000){
            mod(n,n - 45);
        }
        else if(n <= 1000000){
            mod(n,n - 54);
        }
    }
    return 0;
}
