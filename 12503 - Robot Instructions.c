#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,a[102],j,d;
    char ch[102][20],c[20];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int p=0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%s",&ch[j]);
            if(!strcmp(ch[j],"RIGHT")){
                a[j]=1;
            }
            else if(!strcmp(ch[j],"LEFT")){
                a[j]=2;
            }
            else if(!strcmp(ch[j],"SAME")){
                scanf("%s",&c);
                scanf("%d",&d);
                if(a[d-1]==1){
                    a[j]=1;
                }
                else if(a[d-1]==2){
                    a[j]=2;
                }
            }
        }
        for(j=0;j<n;j++){
            if(a[j]==1){
                p=p+1;
            }
            else if(a[j]==2){
                p=p-1;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
