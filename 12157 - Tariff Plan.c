#include<stdio.h>
int main()
{
    int j,t,n,i,a,k,m=0,b,r=0;
    scanf("%d",&t);
    if(t<50){
    for(i=1;i<=t;i++){
        m=0;
        r=0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
           scanf("%d",&a);
           b=a;
           for(k=0; ;k++){
                if(a>=0&&a-30<=0){
                    m=m+10;
                    break;
                }
                else if(a-30>0){
                    m=m+20;
                    a=a-60;
                    if(a<0){
                        break;
                    }
                }
           }
           for(k=0; ;k++){
                if(b>=0&&b-60<=0){
                    r=r+15;
                    break;
                }
                else{
                    r=r+30;
                    b=b-120;
                    if(b<0){
                        break;
                    }
                }
           }
        }
        if(m<r){
            printf("Case %d: Mile %d\n",i,m);
        }
        else if(m>r){
            printf("Case %d: Juice %d\n",i,r);
        }
        else if(m==r){
            printf("Case %d: Mile Juice %d\n",i,m);
        }
    }
    }
    return 0;
}
