#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int j,n,a[60],r=0,m=0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                r=r+1;
            }
            else if(a[j]<a[j+1]){
                m=m+1;
            }
        }
        printf("Case %d: %d %d\n",i,m,r);
    }

    return 0;
}
