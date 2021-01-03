#include<stdio.h>
int main()
{
    char s[100000];
    int i,j,sum,d=0;
    while(gets(s))
    {
        d=d+1;
        printf("Case: %d\n",d);
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d%d",&a,&b);
            for(j=a;j<=b;j++){
                sum=0;
                if(s[j]=='0'){
                    sum=sum+1;
                }
                if(sum==(b-a+1)){
                    printf("Yes\n");
                }
                else{
                    printf("No\n");
                }
            }
        }
    }
    return 0;
}
