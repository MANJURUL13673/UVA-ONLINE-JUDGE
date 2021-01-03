#include<stdio.h>
int main()
{
    int n,a[14],i,j,temp=0,r=0;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(i=0;i<n;i++){
        temp=0;
        for(j=0;j<10;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<9;j++){
            if(a[j]<a[j+1]){
                temp=1;
            }
            else{
                temp=0;
                break;
            }
        }
        for(j=0;j<9;j++){
            if(a[j]>a[j+1]){
                r=1;
            }
            else{
                r=0;
                break;
            }
        }
        if(temp==1||r==1){
            printf("Ordered\n");
        }
        else{
            printf("Unordered\n");
        }
    }
    return 0;
}
