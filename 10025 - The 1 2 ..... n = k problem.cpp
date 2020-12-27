#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    int number;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&number);
        number = abs(number);
        int sum = 0;
        int n = 0;
        while(sum < number){
            sum += (++n);
        }
        if(number % 2 == 1){
            while(sum % 2 != 1){
                sum += (++n);
            }
        }
        else{
            while(sum % 2 != 0){
                sum += (++n);
            }
        }
        if(number == 0){
            printf("3\n");
        }
        else
            printf("%d\n",n);
        if(test){
            printf("\n");
        }
    }
    return 0;
}
