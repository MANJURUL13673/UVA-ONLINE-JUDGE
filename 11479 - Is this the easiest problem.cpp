#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test,a,b,c;
    scanf("%lld",&test);
    for(long long int i = 1; i <= test; i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("Case %lld: ",i);
        if((a < c && b < c && a+b <= c) || (a < b && c < b && a+c <= b) || (b < a && c < a && b + c <= a) || (a <= 0 || b <= 0 || c <= 0)){
            printf("Invalid\n");
        }
        else if(a == b && b == c){
            printf("Equilateral\n");
        }
        else if(a == b || a == c || b == c){
            printf("Isosceles\n");
        }
        else{
            printf("Scalene\n");
        }
    }
    return 0;
}
