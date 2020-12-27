#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int test;
    scanf("%d ",&test);
    string ch,ch2,ch3,ch4,ch5;
    int man = 0;
    test = 2 * test;
    while(test--){
        getline(cin,ch);
        if(test % 2 != 0){
            ch2="";
            ch3="";
            ch4="";
            ch5="";
            man = 0;
            int n = ch.length();
            for(int i = 0; i < n; i++){
                if(ch[i] != '<' && ch[i] != '>'){
                  //  man++;
                    cout<<ch[i];
                }
                else{
                    man++;
                }
                if(man == 1){
                    if(ch[i] != '<')
                        ch2 += ch[i];
                   //     cout<<ch2<<"fuck";
                }
                else if(man == 2){
                    if(ch[i] != '>'){
                        ch3 += ch[i];
                   //     cout<<ch3<<"fuck";
                    }
                }
                else if(man == 3){
                    if(ch[i] != '<')
                        ch4 += ch[i];
                   //     cout<<ch4<<"fuck";
                }
                else if(man == 4){
                    if(ch[i] != '>')
                        ch5 += ch[i];
                   //     cout<<ch5<<"fuck";
                }
            }
            cout<<endl;
        }
        else{
            int n = ch.length();
            for(int i = 0; i < n; i++){
                if(ch[i] == '.'){
                    int temp = 0;
                    while(ch[i] == '.'){
                        temp++;
                        i++;
                    }
                    if(temp == 3){
                        cout<<ch4<<ch3<<ch2<<ch5<<endl;
                        break;
                    }
                    else{
                        i = i-temp;
                    }
                }
                else {
                    cout<<ch[i];
                }
            }
        }
    }
    return 0;
}
