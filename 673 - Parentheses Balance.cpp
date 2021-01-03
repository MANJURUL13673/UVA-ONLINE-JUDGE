#include<iostream>
using namespace std;
int main()
{
    string ch;
    long long int n,m,f,i,j,r,x,y;
    cin>>n;
    for(i=0;i<n;i++){
        f=0;
        r=0;
        getline(cin,ch);
        m=ch.length();
        for(j=0;j<m;j++){
            if(ch[j]=='['){
                f=f+1;
            }
            else if(ch[j]==']'){
                f=f-1;
            }
            if(ch[j]=='('){
                r=r+1;
            }
            else if(ch[j]==')'){
                r=r-1;
            }
            if(f==-1||r==-1){
                break;
            }

        }
        if(f==-1||r==-1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
