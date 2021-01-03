#include<stdio.h>
int main()
{
    int n,m,o,a[21],i,b,sum,temp,s,d=0;
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,a13=0,a14=0,a15=0,a16=0,a17=0,a18=0,a19=0,a20=0;
    while((scanf("%d%d%d",&n,&m,&o)==3)&&n!=0&&m!=0&&o!=0)){
        a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,a13=0,a14=0,a15=0,a16=0,a17=0,a18=0,a19=0,a20=0;
        sum=0;
        temp=0;
        d=d+1;
        if(n<=20){
            for(i=0;i<n;i++){
                scanf("%d",&a[i]);
            }
            for(i=1;i<=m;i++){
                scanf("%d",&b);
                if(b==1&&(a1%2)==0){
                    a1=a1+1;
                    sum=sum+a[b-1];
                }
                else if(b==1&&(a1%2)!=0){
                    a1=a1+1;
                    sum=sum-a[b-1];
                }
                else if(b==2&&(a2%2)==0){
                    a2=a2+1;
                    sum=sum+a[b-1];
                }
                else if(b==2&&(a2%2)!=0){
                    a2=a2+1;
                    sum=sum-a[b-1];
                }
                else if(b==3&&(a3%2)==0){
                    a3=a3+1;
                    sum=sum+a[b-1];
                }
                else  if(b==3&&(a3%2)!=0){
                    a3=a3+1;
                    sum=sum-a[b-1];
                }
            else if(b==4&&(a4%2)==0){
                a4=a4+1;
                sum=sum+a[b-1];
            }
            else if(b==4&&(a4%2)!=0){
                a4=a4+1;
                sum=sum-a[b-1];
            }
            else if(b==5&&(a5%2)==0){
                a5=a5+1;
                sum=sum+a[b-1];
            }
            else if(b==5&&(a5%2)!=0){
                a5=a5+1;
                sum=sum-a[b-1];
            }
            else if(b==6&&(a6%2)==0){
                a6=a6+1;
                sum=sum+a[b-1];
            }
            else if(b==6&&(a6%2)!=0){
                a6=a6+1;
                sum=sum-a[b-1];
            }
            else if(b==7&&(a7%2)==0){
                a7=a7+1;
                sum=sum+a[b-1];
            }
            else if(b==7&&(a7%2)!=0){
                a7=a7+1;
                sum=sum-a[b-1];
            }
            else if(b==8&&(a8%2)==0){
                a8=a8+1;
                sum=sum+a[b-1];
            }
            else if(b==8&&(a8%2)!=0){
                a8=a8+1;
                sum=sum-a[b-1];
            }
            else if(b==9&&(a9%2)==0){
                a9=a9+1;
                sum=sum+a[b-1];
            }
            else if(b==9&&(a9%2)!=0){
                a9=a9+1;
                sum=sum-a[b-1];
            }
            else if(b==10&&(a10%2)==0){
                a10=a10+10;
                sum=sum+a[b-1];
            }
            else if(b==10&&(a10%2)!=0){
                a10=a10+1;
                sum=sum-a[b-1];
            }
            else if(b==11&&(a11%2)==0){
                a11=a11+11;
                sum=sum+a[b-1];
            }
            else if(b==11&&(a11%2)!=0){
                a11=a11+1;
                sum=sum-a[b-1];
            }
            else if(b==12&&(a12%2)==0){
                a12=a12+1;
                sum=sum+a[b-1];
            }
            else if(b==12&&(a12%2)!=0){
                a12=a12+1;
                sum=sum-a[b-1];
            }
            else if(b==13&&(a13%2)==0){
                a13=a13+1;
                sum=sum+a[b-1];
            }
            else if(b==13&&(a13%2)!=0){
                a13=a13+1;
                sum=sum-a[b-1];
            }
            else if(b==14&&(a14%2)==0){
                a14=a14+1;
                sum=sum+a[b-1];
            }
            else if(b==14&&(a14%2)!=0){
                a14=a14+1;
                sum=sum-a[b-1];
            }
            else if(b==15&&(a15%2)==0){
                a15=a15+1;
                sum=sum+a[b-1];
            }
            else if(b==15&&(a15%2)!=0){
                a15=a15+1;
                sum=sum-a[b-1];
            }
            else if(b==16&&(a16%2)==0){
                a16=a16+1;
                sum=sum+a[b-1];
            }
            else if(b==16&&(a16%2)!=0){
                a16=a16+1;
                sum=sum-a[b-1];
            }
            else if(b==17&&(a17%2)==0){
                a17=a17+1;
                sum=sum+a[b-1];
            }
            else if(b==17&&(a17%2)!=0){
                a17=a17+1;
                sum=sum-a[b-1];
            }
            else if(b==18&&(a18%2)==0){
                a18=a18+1;
                sum=sum+a[b-1];
            }
            else if(b==18&&(a18%2)!=0){
                a18=a18+1;
                sum=sum-a[b-1];
            }
            else if(b==19&&(a19%2)==0){
                a19=a19+1;
                sum=sum+a[b-1];
            }
            else if(b==19&&(a19%2)!=0){
                a19=a19+1;
                sum=sum-a[b-1];
            }
            else if(b==20&&(a20%2)==0){
                a20=a20+1;
                sum=sum+a[b-1];
            }
            else if(b==20&&(a20%2)!=0){
                a20=a20+1;
                sum=sum-a[b-1];
            }
            if(temp<sum){
                temp=sum;
            }
        }
        if(temp>o){
            printf("Sequence %d\n",d);
            printf("Fuse was blown.\n\n");
        }
        else if(temp<=o){
            printf("Sequence %d\n",d);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",temp);
       }
    }
    }
    return 0;
}
