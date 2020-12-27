#include<bits/stdc++.h>
using namespace std;
void sortarray(int ch1[],int freq[],int num)
{
    for(int i = (num-1); i>=1; i--){
        if(freq[i] < freq[i-1]){
            swap(freq[i],freq[i-1]);
            swap(ch1[i],ch1[i-1]);
        }
        else if(freq[i] == freq[i-1]){
            if(ch1[i] > ch1[i-1]){
                swap(ch1[i],ch1[i-1]);
            }
        }
        else{
            return;
        }
    }
}
int main()
{
    string ch;
    int ch1[10005];
    int freq[10005];
    int n;
    char temp;
    int num;
    int f = 1;
    while(getline(cin,ch)){
        if(cin.eof()){
            break;
        }
        if(f != 1){
            cout<<endl;
        }
        f++;
        n = ch.length();
        num = 0;
        for(int i = 0; i < n; i++){
            if(ch[i] != '\r'){
                temp = ch[i];
                ch[i] = '\r';
                ch1[num] = temp;
                freq[num] = 1;
                for(int j = i+1; j<n; j++){
                    if(ch[j] == temp){
                        freq[num] = freq[num]+1;
                        ch[j] = '\r';
                    }
                }
                num++;
                sortarray(ch1,freq,num);
            }
        }
        for(int i = 0; i<num; i++){
            cout<<ch1[i]<<" "<<freq[i]<<endl;
        }
    }
    return 0;
}
