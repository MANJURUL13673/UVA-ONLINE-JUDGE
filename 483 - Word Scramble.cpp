#include<iostream>
using namespace std;
int main()
{
    long long int n,i,j,m,f;
    string ch;
    while(getline(cin,ch)){
        n=ch.length();
        for(i=0;i<n;i++){
            if((ch[i-1]==' '&&ch[i]!=' ')||(i==0&&ch[i]!=' ')){
                m=i;
            }
            if((ch[i+1]==' '&&ch[i]!=' ')||(i==n-1&&ch[i]!=' ')){
                f=i;
                for(j=f;j>=m;j--){
                    cout<<ch[j];
                }
            }
            if(ch[i]==' '){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
