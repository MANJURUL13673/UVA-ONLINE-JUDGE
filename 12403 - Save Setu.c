#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n,c=0;
    char ch[100],r;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&ch);
        if(!strcmp(ch,"donate")){
            scanf("%d",&n);
            c=c+n;
        }
        else if(!strcmp(ch,"report")){
            printf("%d\n",c);
        }
    }
    return 0;
}
