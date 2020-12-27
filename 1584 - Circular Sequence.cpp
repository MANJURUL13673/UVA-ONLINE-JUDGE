#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int test,n;
    scanf("%d ",&test);
    int arr[200];
    char name[1000];
    int temp;
    int f = 0;
    int mango;
    for(int i = 1; i <= test; i++){
        cin>>name;
        char c = 'T';
        char ch[6000][200];
        f = 0;
        n = strlen(name);
        for(int j = 0; j<n; j++){
            if(c > name[j]){
                c = name[j];
            }
            if(c == 'A'){
                break;
            }
        }
        for(int j = 0; j<n; j++){
            if(c == name[j]){
                temp = j;
                for(int k = 0; k<n; k++){
                    if(temp == n){
                        temp = 0;
                    }
                    ch[f][k] = name[temp];
                    temp++;
                }
                f++;
            }
        }
        string fuck = ch[0];
        mango = 0;
        for(int k = 1; k<n ;k++){
            for(int j = 0; j<f; j++){
                if(ch[j][0] != '\0'){
                    if(fuck[k] > ch[j][k]){
                        fuck = ch[j];
                        mango = j;
                    }
                }
            }
            for(int j = 0; j<f; j++){
                if(ch[j][0] != '\0'){
                    if(fuck[k] < ch[j][k]){
                        int ru = strlen(ch[mango]);
                        for(int l = 0; l <ru; l++){
                            ch[j][l] = '\0';
                        }
                    }
                }
            }
        }
        cout<<fuck<<endl;
        for(int j = f-1; j>= mango; j--){
            if(ch[j] == ch[mango]){
               int ru = strlen(ch[mango]);
                for(int l = 0; l <ru; l++){
                    ch[j][l] = '\0';
                }
            }
        }
    }
    return 0;
}
