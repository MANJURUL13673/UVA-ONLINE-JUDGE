#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int m,f;
    string ch1,ch2;
    int i,j,temp,sum;
    while(true){
        cin>>ch1>>ch2;
        if(cin.eof()){
            break;
        }
        m = ch1.length();
        f = ch2.length();
        temp = 0;
        sum = 0;
        for(i = 0; i < m; i++){
            for(j = temp; j < f; j++){
                if(ch1[i] == ch2[j]){
                    sum++;
                    temp = j+1;
                    break;
                }
                if(j == f-1){
                    break;
                }
            }
            if(j == f-1){
                break;
            }
        }
        if(sum == m){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
