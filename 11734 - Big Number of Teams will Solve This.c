#include<stdio.h>
#include<string.h>
int main()
{
    char ch[200],ch1[200];
    int n,i,m,f,r,j,k,x;
    scanf("%d ",&n);
    for(i=1;i<=n;i++){
        gets(ch);
        gets(ch1);
        m=strlen(ch);
        f=strlen(ch1);
        r=0;
        x=0;
        for(j=0;j<m;j++){
            if(ch[j]!=' '){
                if(r>=f){
                    x=1;
                    break;
                }
                for(k=r;k<f;k++){
                    if(ch1[k]!=' '){
                        if(ch[j]==ch1[k]){
                            r=k+1;
                            break;
                        }
                        else if(ch[j]!=ch1[k]){
                            x=1;
                            break;
                        }
                    }
                }
            }
            if(x==1){
                break;
            }
        }
        if(x==1){
            printf("Case %d: Wrong Answer\n",i);
        }
        else if(x==0&&m!=f){
            printf("Case %d: Output Format Error\n",i);
        }
        else if(x==0&&m==f){
            printf("Case %d: Yes\n",i);
        }
    }
    return 0;
}
