#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    int sum;
    while(getline(cin,ch)){
        if(cin.eof()){
            break;
        }
        int n = ch.length();
        if(ch[0] >= '0' && ch[0] <= '9'){
            sum = 1;
            int i = n-1;
            while(i >= 0){
                sum = 1;
                if(ch[i] == '1'){
                    sum = (sum*100) + ((ch[i-1]-'0') * 10) + (ch[i-2] - '0');
                    i = i-3;
                }
                else{
                    sum = ((ch[i]-'0')*10)+(ch[i-1]-'0');
                    i = i-2;
                }
                printf("%c",sum);
            }
        }
        else{
            int i = n-1;
            while(i >= 0){
                while(ch[i] != 0){
                    cout<<ch[i]%10;
                    ch[i] = ch[i]/10;
                }
                i--;
            }
        }
        cout<<endl;
    }
    return 0;
}
