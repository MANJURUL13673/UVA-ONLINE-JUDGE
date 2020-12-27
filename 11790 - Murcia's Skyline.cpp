#include<bits/stdc++.h>

using namespace std;
int lis(int length[],int width[],int n)
{
  //  freopen("output.txt","w",stdout);
    int range[n+1],ojon[n+1],i,j;
    for(i = 0; i < n; i++){
        range[i] = 1;
        ojon[i] = width[i];
    }
    for(i = 1; i < n; i++){
        for(j = 0; j < i; j++){
            if(length[i] > length[j]){
                if(ojon[i] < (ojon[j]+width[i])){
                    ojon[i] = ojon[j]+width[i];
                }
            }
        }
    }
    int siz = 0;
    for(i = 0; i < n; i++){
      //  cout<<ojon[i]<<endl;
        if(siz < ojon[i]){
            siz = ojon[i];
        }
    }
    return siz;
}
int lds(int length[],int width[],int n)
{
    int range[n+1],ojon[n+1],i,j;
    for(i = 0; i < n; i++){
        range[i] = 1;
        ojon[i] = width[i];
    }
    for(i = 1; i < n; i++){
        for(j = 0; j < i; j++){
            if(length[i] < length[j]){
                if(ojon[i] < (ojon[j]+width[i])){
                    ojon[i] = ojon[j]+width[i];
                }
            }
        }
    }
    int siz = 0;
    for(i = 0; i < n; i++){
    //    cout<<ojon[i]<<endl;
        if(siz < ojon[i]){
            siz = ojon[i];
        }
    }
    return siz;
}
int main()
{
  //  freopen("output.txt","w",stdout);
    int test,i,k,length[10000],width[10000],n;
    scanf("%d",&test);
    for(k = 1; k <= test; k++){
        scanf("%d",&n);
        for(i = 0; i < n; i++){
            scanf("%d",&length[i]);
        }
        for(i = 0; i < n; i++){
            scanf("%d",&width[i]);
        }
        int increasing = lis(length,width,n);
        int decreasing = lds(length,width,n);
        if(increasing >= decreasing)
            printf("Case %d. Increasing (%d). Decreasing (%d).\n",k,increasing,decreasing);
        else
            printf("Case %d. Decreasing (%d). Increasing (%d).\n",k,decreasing,increasing);
    }
    return 0;
}
