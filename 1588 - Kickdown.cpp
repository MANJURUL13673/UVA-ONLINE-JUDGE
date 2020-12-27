#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch1;
    string ch2;
    int temp = 0,temp2 = 1;
    while(cin>>ch1 && cin>>ch2){
        if(cin.eof()){
            break;
        }
        int n = ch1.length();
        int m = ch2.length();
        temp = 0;
        temp2 = 1;
        int man;
        int far;
            while(true){
                for(int i = 0,j = 0; i < n, j < m; i++,j++){
                    if((i+temp) < n && j < m && ch1[i+temp] == '2' && ch2[j] == '2'){
                        temp++;
                        temp2 = 0;
                        break;
                    }
                    else{
                        temp2 = 1;
                    }
                }
                if(temp2 == 1){
                    break;
                }
            }
            if((temp+m) < n){
                man = n;
            }
            else if((temp + m) < (m+n)){
                man = temp+m;
            }
            else{
                man = m+n;
            }
            temp = 0;
            temp2 = 1;
            while(true){
                for(int i = 0,j = 0; i < n, j < m; i++,j++){
                    if((j+temp) < m && i < n && ch1[i] == '2' && ch2[j+temp] == '2'){
                        temp++;
                        temp2 = 0;
                        break;
                    }
                    else{
                        temp2 = 1;
                    }
                }
                if(temp2 == 1){
                    break;
                }
            }
            if((temp+n) < m){
                far = m;
            }
            else if((temp + n) < (m+n)){
                far = temp+n;
            }
            else{
                far = m+n;
            }
            if(man > far){
                cout<<far<<endl;
            }
            else{
                cout<<man<<endl;
            }
    }
    return 0;
}
