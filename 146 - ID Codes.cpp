#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    bool temp;
    while(true){
        cin>>ch;
        if(ch == "#"){
            break;
        }
        temp = next_permutation(ch.begin(),ch.end());
        if(temp)
            cout<<ch<<endl;
        else{
            cout<<"No Successor"<<endl;
        }
    }
    return 0;
}
