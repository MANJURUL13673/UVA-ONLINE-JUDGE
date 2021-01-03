#include<iostream>
using namespace std;
int main()
{
    string n,f,m,i,temp;
    while(getline(cin,n)){
        f='0';
        m='1';
        if(n[0]=='0'){
            cout<<"The Fibonacci number for "<<n<<" is "<<f<<endl;
        }
        else if(n[0]=='1'){
            cout<<"The Fibonacci number for "<<n<<" is "<<m<<endl;
        }
        else{
           for(i='1';i<=n;i++){
               temp=f;
               f=m;
               m=temp+f;
           }
           cout<<"The Fibonacci number for "<<n<<" is "<<f<<endl;
        }
    }
    return 0;
}
