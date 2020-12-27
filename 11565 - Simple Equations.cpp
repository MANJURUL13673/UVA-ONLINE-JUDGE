#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        bool sol = false;
        for(int x = -100; x <= 100 && !sol; x++){
            for(int y = -100; y <= 100 && !sol; y++){
                for(int z = -100; z <= 100 && !sol; z++){
                    if(y != x && x != z && z != y && x+y+z == a && x * y * z == b && x * x+y* y+ z*z == c){
                        sol = true;
                        printf("%d %d %d\n",x,y,z);
                    }
                }
            }
        }
        if(sol == false){
            printf("No solution.\n");
        }
    }
    return 0;
}
