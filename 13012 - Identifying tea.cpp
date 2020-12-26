#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int far;
    int man;
    int coun,i;
    while((scanf("%d",&far)) == 1){
        coun = 0;
        for(i = 0; i <= 4; i++){
            scanf("%d",&man);
            if(man == far){
                coun++;
            }
        }
        cout<<coun<<endl;
    }
    return 0;
}
