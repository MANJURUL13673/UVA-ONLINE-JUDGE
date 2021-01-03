#include<stdio.h>
int main()
{
    long int a,n,i,sum,d=0,e;
    while((scanf("%ld%ld",&a,&n))==2&&a!=-1&&n!=-1)
    {
        e=a;
        sum=0;
        for(i=0; ;i++){
            if(a==1){
                sum=sum+1;
                break;
            }
            else if(a%2==0){
                sum=sum+1;
                a=a/2;
            }
            else if(a%2!=0){
                sum=sum+1;
                a=(3*a)+1;
                if(a>n){
                   break;
                }
            }
        }
        d=d+1;
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n",d,e,n,sum);
    }
    return 0;
}
