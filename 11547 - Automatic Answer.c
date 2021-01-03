#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i;
    long n,ans,temp,value;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%ld",&n);
        ans=((((((n*567)/9)+7492)*235)/47)-498);
        temp=ans/10;
        value=abs(temp%10);
        printf("%ld\n",value);
    }
    return 0;
}
