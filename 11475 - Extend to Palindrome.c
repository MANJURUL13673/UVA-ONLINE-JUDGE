#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch[100004];
    while(scanf("%s",ch)==1){
        int n=strlen(ch);
        int i;
        int j;
        int k;
        int temp;
        for(i=0;i<n;i++){
            temp=i;
            for(k=temp,j=n-1;k<n,j>=temp;k++,j--){
                if(ch[k]==ch[j]){

                }
                else{
                    break;
                }
            }
            if(k==n){
                break;
            }
        }
         printf("%s",ch);
        for(i=temp-1;i>=0;i--){
            printf("%c",ch[i]);
        }
        printf("\n");
    }
    return 0;
}
