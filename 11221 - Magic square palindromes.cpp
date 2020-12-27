#include<bits/stdc++.h>
using namespace std;

int main()
{
    int siz,root,test,n;
    string ch,arr;
    char c;
    cin>>test>>c;
    for(int p = 1; p <= test; p++){
        getline(cin,ch);
        n = ch.length();
        arr = "";
        if(p == 1){
            if(c >= 97 && c <= 122){
                arr += c;
            }
        }
        for(int i = 0; i < n; i++){
            if(ch[i] >= 97 && ch[i] <= 122){
                arr += ch[i];
            }
        }
        siz = arr.length();
        root = sqrt(siz);
        cout<<"Case #"<<p<<":"<<endl;
        if(root * root != siz){
            cout<<"No magic :("<<endl;
        }
        else{
            int temp = 0;
            for(int i = 0; i < siz/2; i++){
                if(arr[i] != arr[siz-i-1]){
                    temp = 1;
                    break;
                }
            }
         //   cout<<temp<<endl;
            if(temp == 0){
                for(int i = 0; i < root; i++){
                    for(int j = 0; j < siz; j = j+root){
                        if(arr[i+j] != arr[siz-i-j-1]){
                       //     cout<<1<<endl;
                            temp = 1;
                            break;
                        }
                    }
                //    cout<<temp<<endl;
                    if(temp == 1){
                        break;
                    }
                }
            }
            if(temp == 1){
                cout<<"No magic :("<<endl;
            }
            else{
                cout<<root<<endl;
            }
        }
    }
    return 0;
}
