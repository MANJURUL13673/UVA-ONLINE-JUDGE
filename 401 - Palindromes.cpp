#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    long long int a,x,y,z,w,i,j;
    while(getline(cin,ch)){
        a=ch.length();
        w=0;
        x=0;
        for(i=0,j=a-1;i<a,j>=0;i++,j--){
            if(ch[i]==ch[j]){
                w=1;
            }
            else{
                w=0;
                break;
            }
        }
        for(i=0,j=a-1;i<a,j>=0;i++,j--){
            if(ch[i]=='A'&&ch[j]=='A'){
                x=1;
            }
            else if(ch[i]=='E'&&ch[j]=='3'){
                x=1;
            }
            else if(ch[i]=='H'&&ch[j]=='H'){
                x=1;
            }
            else if(ch[i]=='I'&&ch[j]=='I'){
                x=1;
            }
            else if(ch[i]=='J'&&ch[j]=='L'){
                x=1;
            }
            else if(ch[i]=='L'&&ch[j]=='J'){
                x=1;
            }
            else if(ch[i]=='M'&&ch[j]=='M'){
                x=1;
            }
            else if(ch[i]=='O'&&ch[j]=='O'){
                x=1;
            }
            else if(ch[i]=='S'&&ch[j]=='2'){
                x=1;
            }
            else if(ch[i]=='T'&&ch[j]=='T'){
                x=1;
            }
            else if(ch[i]=='U'&&ch[j]=='U'){
                x=1;
            }
            else if(ch[i]=='V'&&ch[j]=='V'){
                x=1;
            }
            else if(ch[i]=='W'&&ch[j]=='W'){
                x=1;
            }
            else if(ch[i]=='X'&&ch[j]=='X'){
                x=1;
            }
            else if(ch[i]=='Y'&&ch[j]=='Y'){
                x=1;
            }
            else if(ch[i]=='Z'&&ch[j]=='5'){
                x=1;
            }
            else if(ch[i]=='1'&&ch[j]=='1'){
                x=1;
            }
            else if(ch[i]=='2'&&ch[j]=='S'){
                x=1;
            }
            else if(ch[i]=='3'&&ch[j]=='E'){
                x=1;
            }
            else if(ch[j]=='5'&&ch[j]=='Z'){
                x=1;
            }
            else if(ch[j]=='8'&&ch[j]=='8'){
                x=1;
            }
            else{
                x=0;
                break;
            }
        }
        if(x==1&&w==1){
            cout<<ch<<" -- is a mirrored palindrome."<<endl;
        }
        else if(x==0&&w==1){
            cout<<ch<<" -- is a regular palindrome."<<endl;
        }
        else if(x==1&&w==0){
            cout<<ch<<" -- is a mirrored string."<<endl;
        }
        else{
            cout<<ch<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
