#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    while(true){
        string arr[55];
        stack<string>stck[15];
        int p = 1;
        for(int i = 0; i < 52; i++){
            cin>>arr[i];
            if(arr[i] == "#"){
                p = 0;
                break;
            }
        }
        if(p == 0){
            break;
        }
        int temp = 51;
        for(int i = 1; i <= 4; i++){
            for(int j = 12; j >= 0; j--){
                stck[j].push(arr[temp--]);
            }
        }
        temp = 13;
        for(int i = 1; i <= 52; i++){
            ch = stck[13-temp].top();
       //     cout<<ch<<endl;
            stck[13-temp].pop();
            if(ch[0] == 'K'){
                temp = 13;
            }
            else if(ch[0] == 'Q'){
                temp = 12;
            }
            else if(ch[0] == 'J'){
                temp = 11;
            }
            else if(ch[0] == 'T'){
                temp = 10;
            }
            else if(ch[0] == 'A'){
                temp = 1;
            }
            else{
                temp = ch[0] - '0';
            }
            if(stck[13-temp].empty()){
                if(i < 10){
                    cout<<0<<i;
                }
                else{
                    cout<<i;
                }
                cout<<","<<ch<<endl;
                break;
            }
        }
    }
    return 0;
}
