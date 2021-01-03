#include<stdio.h>
int main()
{
    double h,u,d,f,m;
    while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)==4){
    double i;
    double a;
    a=(u*f)*0.01;
    m=h;
    if(h!=0&&h<=100&&u<=100&&d<=100&&f<=100){
        for(i=1;i<=1000 ;i++){
            h=h-u;
            if(h>=0){
                h=h+d;
            }
            if(h<0){
                printf("success on day %0.00lf\n",i);
                break;
            }
            else if(h>m){
                printf("failure on day %0.00lf\n",i);
                break;
            }
            if((u-a)>=0){
                u=u-a;
            }
            }
        }
        else{
            break;
        }
    }
    return 0;
}
