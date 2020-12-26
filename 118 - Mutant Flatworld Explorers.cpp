#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int a,b,x,y,n,i,temp,j;
    char c,l;
    scanf("%d %d ",&a,&b);
    int arr[2000][2000];
    for(i = 0; i < 1000; i++){
        for(j = 0; j < 1000; j++){
            arr[i][j] = -1;
        }
    }
    while((scanf("%d %d %c ",&x,&y,&c)) == 3){
        char ch[1000];
        gets(ch);
        n = strlen(ch);
        l = c;
        temp = 0;
        for(i = 0; i < n; i++){
            if(ch[i] == 'F'){
                if(l == 'E'){
                    if(x + 1 > a && arr[x][y] != 0){
                        arr[x][y] = 0;
                        temp = 1;
                        break;
                    }
                    if(x + 1 <= a){
                        x = x+1;
                    }
                }
                else if(l == 'N'){
                    if(y + 1 > b && arr[x][y] != 0){
                        arr[x][y] = 0;
                        temp = 1;
                        break;
                    }
                    if(y + 1 <= b){
                        y = y+1;
                    }
                }
                else if(l == 'W'){
                    if(x - 1 < 0 && arr[x][y] == -1){
                        arr[x][y] = 0;
                        temp = 1;
                        break;
                    }
                    if(x - 1 >= 0){
                        x = x-1;
                    }
                }
                else{
                    if(y - 1 < 0 && arr[x][y] == -1){
                        arr[x][y] = 0;
                        temp = 1;
                        break;
                    }
                    if(y - 1 >= 0){
                        y = y-1;
                    }
                }
            }
            else if(ch[i] == 'L'){
                if(l == 'E'){
                    l = 'N';
                }
                else if(l == 'N'){
                    l = 'W';
                }
                else if(l == 'W'){
                    l = 'S';
                }
                else{
                    l = 'E';
                }
            }
            else{
                if(l == 'E'){
                    l = 'S';
                }
                else if(l == 'N'){
                    l = 'E';
                }
                else if(l == 'W'){
                    l = 'N';
                }
                else{
                    l = 'W';
                }
            }
        }
        cout<<x<<" "<<y<<" "<<l;
        if(temp == 1){
            cout<<" LOST"<<endl;
        }
        else{
            cout<<endl;
        }
    }
    return 0;
}
