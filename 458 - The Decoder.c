#include<stdio.h>
#include<string.h>
int main()
{
    int m,i;
    char ch[1000];
    while(gets(ch)){
        m=strlen(ch);
        for(i=0;i<m;i++){
            printf("%c",ch[i]-7);
        }
        printf("\n");
    }
    return 0;
}
