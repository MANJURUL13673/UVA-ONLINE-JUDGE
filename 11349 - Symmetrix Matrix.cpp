#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int arr[310][310];
    int test,i,j,m,f,n,p,temp;
    char c,r;
    scanf("%d",&test);
    for(p = 1; p <= test; p++){
        scanf(" %c %c %d",&c,&r,&n);
        temp = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                scanf("%lld",&arr[i][j]);
                if(arr[i][j] < 0){
                    temp = 1;
                }
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                printf("%lld ",arr[i][j]);
            }
            printf("\n");
        }
        printf("Test #%d: ",p);
        if(!temp){
            for(i = 0,m = n-1; i < n, m >= 0; i++,m--){
                for(j = 0,f = n-1; j < n, f >= 0; j++,f--){
                    if(arr[i][j] != arr[m][f]){
                        temp = 1;
                        break;
                    }
                }
                if(temp == 1){
                    break;
                }
            }
        }
        if(temp == 1){
            printf("Non-symmetric.\n");
        }
        else{
            printf("Symmetric.\n");
        }
    }
    return 0;
}
