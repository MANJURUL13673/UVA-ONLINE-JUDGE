#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,block,root,value;
    while(scanf("%d",&n)){
        if(n == 0){
            break;
        }
        root = sqrt(n);
        if((root * root) < n){
            block = root+1;
        }
        else if(root * root == n){
            block = root;
        }
        value = (block*block)-block+1;
      //  printf("%d\n",value);
        if(block == 1){
            printf("1 1\n");
        }
        else{
            if(value == n){
                printf("%d %d\n",block,block);
            }
            else if(value < n){
                if(block % 2 == 0){
                    printf("%d %d\n",block,((block-0)-(n-value)));
                }
                else{
                    printf("%d %d\n",((block-0)-(n-value)),block);
                }
            }
            else{
                if(block % 2 != 0){
                    printf("%d %d\n",block,((block-0)-(value-n)));
                }
                else{
                    printf("%d %d\n",((block-0)-(value-n)),block);
                }
            }
        }
    }
    return 0;
}
