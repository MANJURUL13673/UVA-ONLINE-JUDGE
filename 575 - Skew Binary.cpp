#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int n;
    int value;
    while(cin>>ch){
        if(ch == "0"){
           break;
        }
  //      cout<<ch<<endl;
        value = 0;
        n = ch.length();
        int a = n;
        for(int i = 0; i < n; i++){
            value += (ch[i]-'0')*(pow(2,a)-1);
    //        cout<<value<<endl;
            a--;
        }
        cout<<value<<endl;
    }
    return 0;
}
