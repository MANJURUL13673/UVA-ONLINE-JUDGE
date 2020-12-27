#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)==1&&n>0)
    {
        long long arr[100];
        long long sum=0;
        long long i=0;
        printf("The parity of ");
        for(i=0;n!=0;i++){
            if((n%2)!=0){
                sum=sum+1;
            }
            arr[i]=n%2;
            n=n/2;
        }
        long long j;
        for(j=i-1;j>=0;j--){
            printf("%lld",arr[j]);
        }
        printf(" is %lld (mod 2).\n",sum);
    }
    return 0;
}
