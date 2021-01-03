#include<stdio.h>
int main()
{
    char ch[100];
    int i=0;
    while(gets(ch)){
        i=i+1;
        if(!strcmp(ch,"Hajj")){
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(!strcmp(ch,"Umrah")){
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        else if(!strcmp(ch,"*")){
            break;
        }
    }
    return 0;
}
