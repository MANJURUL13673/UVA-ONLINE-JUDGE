#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int test;
    scanf("%d ",&test);
    char ch[100000];
    int k = test;
    int n,i;
    char ch2[100000];
    int top,j,temp,far;
    while(test--){
        scanf(" %s",ch);
        if(test != (k-1)&&test!=-1){
            cout<<endl;
        }
        top = 0;
        ch2[0] = ch[0];
        top = 1;
        n = strlen(ch);
        for(i = 1; i < n; i++){
            temp = 0;
            far = i;
            if(ch2[0] == ch[i]){
                while(i < n){
                  //  cout<<i<<endl;
                    for(j = 0; j < top; j++){
                        if(i == n){
                            temp = 1;
                            break;
                        }
                        if(ch2[j] == ch[i++]){
                  //          cout<<i<<endl;
                        }
                        else{
                       //     cout<<i<<endl;
                            temp = 1;
                            break;
                        }
                    }
                    if(temp == 1){
                        break;
                    }
                }
            }
            else if(temp == 1){
                i = i-1;
                cout<<i<<endl;
                for(int m = far; m <= i; m++){
                 //   cout<<1<<endl;
                    ch2[top++] = ch[m];
                }
            }
            else if(ch2[0] != ch[far] || i < n){
             //   cout<<i<<endl;
                ch2[top++] = ch[far];
            //    cout<<top<<endl;
            }
            cout<<temp<<endl;
        }
        cout<<top<<endl;
    }
    return 0;
}
