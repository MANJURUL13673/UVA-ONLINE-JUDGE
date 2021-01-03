#include<stdio.h>
int main()
{
    int j,t,i,d[12],c,temp;
    char s[12][110],r;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        c=0;
        temp=0;
        for(j=0;j<10;j++){
            scanf("%s%d",&s[j],&d[j]);
        }
        for(j=0;j<10;j++){
            if(temp<d[j]){
                temp=d[j];
                c=j;
            }
        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++){
            if(d[c]==d[j]){
                printf("%s\n",s[j]);
            }
        }
    }
    return 0;
}
