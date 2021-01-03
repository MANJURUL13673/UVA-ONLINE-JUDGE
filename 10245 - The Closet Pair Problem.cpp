#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    int x[100005],y[100005];
    while(scanf("%d",&n) && n){
        for(int i = 0; i < n; i++){
            scanf("%d%d",&x[i],&y[i]);
        }
        temp = 100000000;
        int val;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                val = ((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j]));
                if(val < temp){
                    temp = val;
                }
            }
        }
     //   cout<<temp<<endl;
        if(temp >= 100000000){
            printf("INFINITY\n");
        }
        else{
            printf("%.4lf\n",(double)sqrt((double)temp));
        }
    }
    return 0;
}
