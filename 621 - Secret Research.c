#include<stdio.h>
int main()
{
    int y,z,x[10000],i,j,k,temp,v;
    float a,b,c[10000],r,m;
    while(scanf("%d%f%f%d",&y,&a,&b,&z)&&y>0&&a>0&&b>0&&z>0){
        r=b;
        m=b+a;
        temp=0,v=1;
        for(i=0;i<z;i++){
            scanf("%d%f",&x[i],&c[i]);
        }
        x[z]=10000;
        m=m-(m*c[0]);
        printf("%f\n",m);
        x[0]=x[0]+1;
        for(j=0;j<z;j++){
            for(k=1;x[j]!=x[j+1];k++){
                r=r-a;
                m=m-(m*c[j]);
                if(r<m){
                    temp=1;
                    break;
                }
                else{
                    v=v+1;
                }
                x[j]=x[j]+1;

            }
            if(temp==1){
                break;
            }
        }
        if(v==1){
            printf("%d month",v);
        }
        else{
            printf("%d months",v);
        }
    }
    return 0;
}
