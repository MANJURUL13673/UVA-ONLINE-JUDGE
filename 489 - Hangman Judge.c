#include<stdio.h>
#include<string.h>
int main()
{
    int a,m,i,j,d=0,temp=0,n,k,x,y;
    char ch[100000],c, e,ch1[100000];
    while(scanf("%d%c",&a,&c)&&a!=-1){
        d=0;
        temp=0;
        k=0;
        x=0;
        y=2;
        gets(ch);
        m=strlen(ch);
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                if(ch[i]==ch[j]&&i!=j&&ch[j]!='0'){
                    ch[j]='0';
                    d=d+1;
                }
            }
        }
        gets(ch1);
        n=strlen(ch1);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(ch1[i]==ch1[j]&&i!=j&&ch1[j]!='0'){
                    ch1[j]='0';
                }
            }
        }
        for(i=0;i<n;i++){
           for(j=0;j<m;j++){
                x=0;
                if(ch1[i]==ch[j]&&ch[j]!='0'&&ch1[i]!='0'){
                   temp=temp+1;
                   x=1;
                   break;
                }
            }
            if(x==0&&ch1[i]!='0'){
                    k=k+1;
            }
            if(k<7&&temp>=(m-d)){
                    y=0;
            }
        }
        printf("Round %d\n",a);
        if(y==0){
            printf("You win.\n");
        }
        else if(k<7){
            printf("You chickened out.\n");
        }
        else if(k>=7){
            printf("You lose.\n");
        }
    }
    return 0;
}
