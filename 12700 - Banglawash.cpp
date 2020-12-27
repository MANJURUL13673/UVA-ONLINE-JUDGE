#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    int j,test,n,i,bangladesh,www,abandon,tie;
    cin>>test;
    for(i = 1; i <= test; i++){
        cin>>n>>ch;
        bangladesh = 0;
        www = 0;
        abandon = 0;
        tie = 0;
        cout<<"Case "<<i<<": ";
        for(j = 0; j < n; j++){
            if(ch[j] == 'B'){
                bangladesh += 1;
            }
            else if(ch[j] == 'W'){
                www += 1;
            }
            else if(ch[j] == 'A'){
                abandon += 1;
            }
            else{
                tie += 1;
            }
        }
        if(abandon == n){
            cout<<"ABANDONED"<<endl;
        }
        else if(bangladesh == www){
            cout<<"DRAW "<<bangladesh<<" "<<tie<<endl;
        }
        else if((bangladesh + abandon) == n){
            cout<<"BANGLAWASH"<<endl;
        }
        else if((www + abandon) == n){
            cout<<"WHITEWASH"<<endl;
        }
        else if(bangladesh > www){
            cout<<"BANGLADESH "<<bangladesh<<" - "<<www<<endl;
        }
        else{
            cout<<"WWW "<<www<<" - "<<bangladesh<<endl;
        }
    }
    return 0;
}
