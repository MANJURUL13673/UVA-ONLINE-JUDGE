#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[100];
    int arr2[100];
    string ch1,ch2;
    int i,j,m,f;
    while(cin>>ch1>>ch2){
        if(cin.eof()){
            break;
        }
        m = ch1.length();
        f = ch2.length();
        if(m != f){
            cout<<"NO"<<endl;
        }
        else{
            for(i = 64; i < 92; i++){
                arr1[i] = 0;
                arr2[i] = 0;
            }
            for(i = 0; i < m; i++){
                arr1[ch1[i]]++;
            }
            for(i = 0; i <f; i++){
                arr2[ch2[i]]++;
            }
            sort(arr1+65,arr1+91);
            sort(arr2+65,arr2+91);
            int temp = 0;
            for(i = 65; i <= 90; i++){
                if(arr1[i] != arr2[i]){
                    temp = 1;
                    break;
                }
            }
            if(temp == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
