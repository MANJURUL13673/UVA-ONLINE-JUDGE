#include<stdio.h>
#include<string.h>
int fibanocci(int n){
    int i,j,temp,d=0;
    char sum[1000]="1";
    char ch[1000]="0";
    char ch1[1000];
    int k;
    for(i=3;i<=n;i++){
        k=strlen(ch)-1;
        for(j=(strlen(sum)-1);j>=0;j--){
            ch1[j]=sum[j];
            temp=(sum[j]-'0')+d;
            if(k>=0){
                temp=temp+(ch[k]-'0');
            }
            if(temp>=10){
                d=temp/10;
                temp=temp%10;
            }
            sum[j]=temp+'0';
            k=k-1;
        }
        for(j=(strlen(ch1))-1;j>=0;j--){
            ch[j]=ch1[j];
        }
    }
    for(j=strlen(sum)-1;j>=0;j--){
        printf("%c",sum[j]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int n;
    int i,j;
    while(scanf("%d\n",&n)){
        if(n==1){
            printf("0\n");
        }
        else if(n==2){
            printf("1\n");
        }
        else{
            fibanocci(n);
        }
    }
    return 0;
}

