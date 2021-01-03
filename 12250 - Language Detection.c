#include<stdio.h>
#include<string.h>
int main()
{
    char ch[][2][15]={
    "HELLO","ENGLISH",
    "HOLA","SPANISH",
    "HALLO","GERMAN",
    "BONJOUR","FRENCH",
    "CIAO","ITALIAN",
    "ZDRAVSTVUJTE","RUSSIAN"
    };
    char words[15];
    int i,temp,j=0;
    while(gets(words)){
        j=j+1;
        for(i=0;i<6;i++){
        if(!strcmp(words,ch[i][0])){
            printf("Case %d: %s\n",j,ch[i][1]);
            temp=0;
            break;
        }
        else if(strcmp(words,ch[i][0])&&words[0]!='#'){
            temp=1;
        }
        else if(words[0]=='#'){
            temp=2;
            break;
        }
        }
        if(temp==1){
            printf("Case %d: UNKNOWN\n",j);
        }
        else if(temp==2){
            break;
        }
    }
    return 0;
}
