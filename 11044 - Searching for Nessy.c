#include<stdio.h>
int main()
{
    int n,a,b,c,d,x,y,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        a=a-2;
        b=b-2;
        c=a%3;
        if(c==0){
            x=a/3;
        }
        else{
            x=(a/3)+1;
        }
        d=b%3;
        if(d==0){
            y=b/3;
        }
        else{
            y=(b/3)+1;
        }
        printf("%d\n",x*y);
    }
    return 0;
}
