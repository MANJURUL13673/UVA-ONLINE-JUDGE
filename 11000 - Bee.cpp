#include<iostream>
using namespace std;
int main()
{
    long long int n;
    long long int male;
    long long int female;
    long long int temp,temp2;
    long long int i;
    while(cin>>n){
        if(n < 0){
            break;
        }
        male = 0;
        female = 0;
        temp = 1;
        temp2 = 1;
        for(i = 1; i <= n; i++){
            female = temp + male;
            male += temp2;
            temp2 = female;
            temp = 1;
        }
        if(n == 0){
            cout<<0<<" "<<1<<endl;
        }
        else{
            cout<<male<<" "<<female+male<<endl;
        }
    }
    return 0;
}
