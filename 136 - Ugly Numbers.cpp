#include<iostream>
using namespace std;
bool func(int i)
{
    while(i % 2 == 0){
        i >>= 1;
        if(i == 1){
            return true;
        }
    }
    while(i % 3 == 0){
        i = i/3;
        if(i == 1){
            return true;
        }
    }
    while(i % 5 == 0){
        i = i / 5;
        if(i == 1){
            return true;
        }
    }
    return false;
}
int main()
{
    bool temp;
    int i,k;
    for(i = 2; i <= 999999999; i++){
        cout<<i<<endl;
        temp = func(i);
        if(temp == true){
            k++;
            if(k == 1500){
                break;
            }
        }
    }
    cout<<i<<endl;
    return 0;
}
