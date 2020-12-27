#include<stdio.h>
int search(int a,int i)
{
    int sum=0;
    int j,k,b;
    for(j=1;j<=a;j++){
        b=j;
        for(k=1;b!=0;k++){
            if((b%10)==i){
                sum=sum+1;
            }
            b=b/10;
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    for(m=1;m<=n;m++){
        int a;
        int i;
        scanf("%d",&a);
        for(i=0;i<10;i++){
            if(i<=8){
                printf("%d ",search(a,i));
            }
            else{
                printf("%d",search(a,i));
            }
        }
        printf("\n");
    }
    return 0;
}
