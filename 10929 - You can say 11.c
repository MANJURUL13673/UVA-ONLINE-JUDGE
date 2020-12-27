#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1005];
    int m,i,sum;
    while(1){
        scanf("%s",&ch);
        m=strlen(ch);
        sum=0;
        if(!strcmp(ch,"0")){
            break;
        }
        for(i=0;i<m;i++){
            if(ch[i]=='1'||ch[i]=='0'||ch[i]=='2'||ch[i]=='3'||ch[i]=='4'||ch[i]=='5'||ch[i]=='6'||ch[i]=='7'||ch[i]=='8'||ch[i]=='9'){
                if(i%2==0){
                    sum=sum+(ch[i]-'0');
                }
                else{
                    sum=sum-(ch[i]-'0');
                }
                printf("%c",ch[i]);
            }
        }
        if(sum%11==0){
            printf(" is a multiple of 11.\n",ch);
        }
        else{
            printf(" is not a multiple of 11.\n",ch);
        }
    }
    return 0;
}
