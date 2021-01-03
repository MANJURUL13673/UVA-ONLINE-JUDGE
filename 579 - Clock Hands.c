#include<stdio.h>
int main()
{
    int a,sum;
    char c;
    float d,add,e,k;
    while(scanf("%d%c%f",&a,&c,&d)&&(a!=0||d!=0)){
        sum=a*30;
        add=d*6;
        k=add/12;
        e=sum-add+k;
        if(e<=360-e&&e>=0){
            printf("%0.03f\n",e);
        }
        else if(e<0){
            if(-e>360+e){
                printf("%0.03f\n",360+e);
            }
            else{
                printf("%0.03f\n",-e);
            }
        }
        else if(e>360-e){
            printf("%0.03f\n",360-e);
        }
    }
    return 0;
}
