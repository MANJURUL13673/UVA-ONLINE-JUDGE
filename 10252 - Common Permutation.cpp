#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch1,ch2;
    char ch[100000];
    int m,f,i,j,temp;
    while(true){
        getline(cin,ch1);
        getline(cin,ch2);
        if(cin.eof()){
            break;
        }
        m = ch1.length();
        f = ch2.length();
        temp = 0;
        for(i = 0; i < m; i++){
            if(ch1[i] >= 'a' && ch1[i] <= 'z'){
                for(j = 0; j < f; j++){
                    if(ch1[i] == ch2[j]){
                        ch[temp] = ch2[j];
                   //     cout<<ch[temp]<<endl;
                        ch2[j] = '0';
                        temp++;
                        break;
                    }
                }
            }
        }
        sort(ch,ch+temp);
        for(i = 0; i < temp; i++){
            cout<<ch[i];
        }
        cout<<endl;
    }
    return 0;
}
