#include<stdio.h>
int main()
{
    int n,i,a[55],sum,k,r,c=0;
    while((scanf("%d",&n)==1)&&n!=0){
        sum=0;
        r=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        sum=sum/n;
        for(i=0;i<n;i++){
            if(a[i]>sum){
               k=a[i]-sum;
               r=r+k;
            }
        }
        c=c+1;
        printf("Set #%d\n",c);
        printf("The minimum number of moves is %d.\n",r);
        printf("\n");
    }
    return 0;
}
