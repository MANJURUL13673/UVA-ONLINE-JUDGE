#include<stdio.h>
int main()
{
    int n,a,i,j,k,b[20],t=0,sum=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        scanf("%d",&a);
        for(j=0;j<a;j++){
            scanf("%d",&b[j]);
        }
        for(j=0;j<a-1;j++){
            for(k=0;k<a-1;k++){
                if(b[k]<b[k+1]){
                    t=b[k];
                    b[k]=b[k+1];
                    b[k+1]=t;
                }
            }
        }
        for(j=0;j<a-1;j++){
            r=b[j]-b[j+1];
            printf("%d\n",r);
            sum=sum+r;
        }
        printf("%d\n",sum*2);
    }
    return 0;
}
