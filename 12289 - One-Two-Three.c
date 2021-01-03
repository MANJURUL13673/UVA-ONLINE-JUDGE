#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char ch[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        gets(ch);
        j=strlen(ch);
        if(j==3){
            if((ch[0]=='o'&&ch[1]=='n')||(ch[0]=='o'&&ch[2]=='e')||(ch[1]=='n'&&ch[2]=='e')){
                printf("1\n");
            }
            else if((ch[0]=='t'&&ch[1]=='w')||(ch[0]=='t'&&ch[2]=='o')||(ch[1]=='w'&&ch[2]=='o')){
                printf("2\n");
            }
            else if((ch[0]=='s'&&ch[1]=='i')||(ch[0]=='s'&&ch[2]=='x')||(ch[1]=='i'&&ch[2]=='x')){
                printf("6\n");
            }
            else if((ch[0]=='t'&&ch[1]=='e')||(ch[0]=='t'&&ch[2]=='n')||(ch[1]=='e'&&ch[2]=='n')){
                printf("10\n");
            }
        }
        else if(j==4){
            if((ch[0]=='f'&&ch[1]=='o'&&ch[2]=='u')||(ch[0]=='f'&&ch[1]=='o'&&ch[3]=='r')||(ch[0]=='f'&&ch[2]=='u'&&ch[3]=='r')||(ch[1]=='o'&&ch[2]=='u'&&ch[3]=='r')){
                printf("4\n");
            }
            else if((ch[0]=='f'&&ch[1]=='i'&&ch[2]=='v')||(ch[0]=='f'&&ch[1]=='i'&&ch[3]=='e')||(ch[0]=='f'&&ch[2]=='v'&&ch[3]=='e')||(ch[1]=='i'&&ch[2]=='v'&&ch[3]=='e')){
                printf("5\n");
            }
            else if((ch[0]=='n'&&ch[1]=='i'&&ch[2]=='n')||(ch[0]=='n'&&ch[1]=='i'&&ch[3]=='e')||(ch[0]=='n'&&ch[2]=='n'&&ch[3]=='e')||(ch[1]=='i'&&ch[2]=='n'&&ch[3]=='e')){
                printf("9\n");
            }
        }
        else if(j==5){
            if(ch[0]=='t'||ch[1]=='h'){
                printf("3\n");
            }
            else if(ch[0]=='s'||ch[1]=='e'){
                printf("7\n");
            }
            else if(ch[0]=='e'||ch[1]=='i'){
                printf("8\n");
            }
        }
    }
    return 0;
}
