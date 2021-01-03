#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2&&a!=-1&&b!=-1){
        if(a<b){
        if(abs(a-b)>=(abs(a-0)+abs(99-b)+1)){
            printf("%d\n",(abs(a-0)+abs(99-b)+1));
        }
        else{
            printf("%d\n",abs(a-b));
        }
        }
        else{
            if(abs(a-b)>=(abs(99-a)+abs(b-0)+1)){
            printf("%d\n",(abs(99-a)+abs(b-0)+1));
        }
        else{
            printf("%d\n",abs(a-b));
        }
        }
    }
    return 0;
}
