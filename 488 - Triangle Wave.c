#include<stdio.h>
int main()
{
    int n,i,a,f,j,k,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&f);
        for(p=1;p<=f;p++){
           for(j=1;j<=a;j++){
                for(k=1;k<=j;k++){
                    printf("%d",j);
                }
                printf("\n");
           }
           for(j=a-1;j>=1;j--){
                for(k=j;k>=1;k--){
                    printf("%d",j);
                }
                printf("\n");
           }
           if(p!=f){
            printf("\n");
           }
        }
        if(i!=n){
            printf("\n");
        }
    }
    return 0;
}
