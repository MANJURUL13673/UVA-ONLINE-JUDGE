#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    int test;
    int n;
    cin>>test;
    int i;
    int sum = 0,value;
    while(test--){
        cin>>n>>ch;
        sum = 0;
        value = 0;
        for(i = 0; i < n; i++){
            if(ch[i] == '.'){
                sum++;
            }
            else{
                if(sum % 3 == 0){
                    value += sum / 3;
                }
                else{
                    value += sum / 3 + 1;
                }
                sum = 0;
            }
            if(i == (n - 1) && ch[i] == '.'){
                if(sum % 3 == 0){
                    value += sum / 3;
                }
                else{
                    value += sum / 3 + 1;
                }
                sum = 0;
            }
        }
        cout<<value<<endl;
    }
    return 0;
}
