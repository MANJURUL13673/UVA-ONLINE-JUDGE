#include<stdio.h>
int main()
{
    int n,i,a[1001],c=0,j=0;
    while(scanf("%d",&n)==1&&n!=0){
        c=0;
        j=j+1;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i]!=0){
                c=c+1;
            }
            else if(a[i]==0){
                c=c-1;
            }
        }
        printf("Case %d: %d\n",j,c);
    }
    return 0;
}
