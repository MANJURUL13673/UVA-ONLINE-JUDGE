#include<iostream>
#include<math.h>
using namespace std;
int value(long long int n)
{
    int sum = 0;
    while(n != 0){
        n = n/10;
        sum++;
    }
    return sum;
}
int main()
{
    long long int n;
    int test;
    cin>>test;
    int k;
    long long int sum;
    long long int far;
    while(test -- ){
        cin>>n;
        far = n;
        int a = value(n);
        sum = 0;
        while(n != 0){
            k = n % 10;
            n = n / 10;
            sum = sum + pow(k,a);
         //   cout<<sum<<endl;
        }
    //    cout<<sum<<endl;
        if(sum == far){
            cout<<"Armstrong"<<endl;
        }
        else{
            cout<<"Not Armstrong"<<endl;
        }
    }
    return 0;
}
