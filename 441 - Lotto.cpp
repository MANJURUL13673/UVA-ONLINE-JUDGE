#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int k;
    int temp = 0;
    while((scanf("%d",&k)) && k != 0){
        for(int i = 0; i < k; i++){
            scanf("%d",&arr[i]);
        }
        if(k && temp){
            printf("\n");
        }
        for(int i = 0; i < k-5; i++){
            for(int j = i+1; j < k - 4; j++){
                for(int p = j+1; p < k - 3; p++){
                    for(int q = p+1; q < k - 2; q++){
                        for(int m = q+1; m < k -1; m++){
                            for(int n = m+1; n < k; n++){
                                printf("%d %d %d %d %d %d\n",arr[i],arr[j],arr[p],arr[q],arr[m],arr[n]);
                            }
                        }
                    }
                }
            }
        }
        temp = 1;
    }
    return 0;
}
