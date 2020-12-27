#include<bits/stdc++.h>
using namespace std;

int tc,a,b,row[9];

bool place(int r,int c)
{
    for(int prev  = 0; prev < c; prev++){
        if(row[prev] == r || )
    }
}
void backtrack(int c)
{
    if(c == 8 && row[b] == a){
        for(int j = 0; j < 8; j++){
            printf("%d ",row[j]+1);
        }
        printf("\n");
    }
    for(int r = 0; r < 8; r++){
        if(place(r,c)){
            row[c] = r;backtrack(c+1);
        }
    }
}
int main()
{
    scanf("%d",&tc);
    while(tc--){
        scanf("%d %d",&a,&b);a--;b--;
        memset(row,0,sizeof(row));linecounter = 0;
        backtrack(0);
    }
    return 0;
}
