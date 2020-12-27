#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        if(n % 2 == 0){
            cout<<n/2<<endl;
        }
        else{
            cout<<(n-1)/2<<endl;
        }
    }
    return 0;
}
