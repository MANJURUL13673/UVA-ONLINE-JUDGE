#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    while(getline(cin,ch)){
        if(cin.eof()){
            break;
        }
        int temp1 = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 6; j++){
                if(ch[i] == ch[6+j] && ch[6+j] != '0'){
                    if(ch[5-i] == ch[11-j] && ch[11-j] != '0'){
                        temp1++;
                        ch[6+j] = '0';
                        ch[11-j] = '0';
                        break;
                    }
                }
            }
        }
        if(temp1 == 3){
            cout<<"TRUE"<<endl;
        }
        else{
            cout<<"FALSE"<<endl;
        }
    }
    return 0;
}
