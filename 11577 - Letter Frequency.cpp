#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char ch[100000];
    int test;
    int i;
    int arr[30],n,j,k;
    scanf("%d ",&test);
    for(i = 1;i <= test; i++){
        gets(ch);
        n = strlen(ch);
        for(j = 0; j < 26; j++){
            arr[j] = 0;
            for(k = 0; k < n; k++){
                if(ch[k] == (65+j) || ch[k] == (97+j)){
                    arr[j] = arr[j]+1;
                }
            }
        }
        int temp = 0;
        for(j = 0; j < 26;j++){
            if(temp < arr[j]){
                temp = arr[j];
            }
        }
        for(j = 0; j < 26; j++){
            if(arr[j] == temp){
                printf("%c",97+j);
            }
        }
        cout<<endl;
    }
    return 0;
}
