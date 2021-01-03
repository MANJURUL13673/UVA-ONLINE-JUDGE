#include<stdio.h>
int main()
{
    int n,i,f=2000000,j,c,m,a=-1,b=-1;
    register char ch[200000];
    while((scanf("%d",&n))==1&&n!=0){
        f=200000;
        scanf("%s",&ch);
        for(i=0;i<n;i++){
            if(ch[i]=='Z'){
                f=0;
                break;
            }
            else if(ch[i]=='D'){
                a=-1;
                for(j=i;ch[j]!='R';j++){
                    a=a+1;
                    c=a;
                }
                if(f>c+1){
                    f=c+1;
                }
            }
            else if(ch[i]=='R'){
                b=-1;
                for(j=i;ch[j]!='D';j++){
                    b=b+1;
                    m=b;
                    }
                    if(f>m+1){
                        f=m+1;
                    }
                }
            }
            if(f==0){
                printf("0\n");
            }
            else{
                printf("%d\n",f);
            }
    }
    return 0;
}
