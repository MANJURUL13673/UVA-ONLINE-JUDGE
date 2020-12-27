#include<iostream>
using namespace std;
int main()
{
    string ch;
    int n;
    while(cin>>ch){
        if(ch == "END"){
            break;
        }
        n = ch.length();
        if(ch == "1"){
            cout<<1<<endl;
        }
        else if(n == 1){
            cout<<2<<endl;
        }
        else if(n <= 9){
            cout<<3<<endl;
        }
        else{
            cout<<4<<endl;
        }
    }
    return 0;
}
