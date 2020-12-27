#include<bits/stdc++.h>
using namespace std;
bool sortbyfirst(const pair<int,int>&a, const pair<int,int>&b)
{
    return (a.first < b.first);
}
int main()
{
    int test;
    scanf("%d",&test);
    int arr[1005];
    int i,n,a,b,j,q;
    while(test--){
        vector< pair<int,int> >vect;
        scanf("%d",&n);
        for(i = 0; i < n; i++){
            scanf("%d%d",&a,&b);
            vect.push_back(make_pair(a,b));
        }
        sort(vect.begin(),vect.end(),sortbyfirst);
        scanf("%d",&q);
        for(i = 0; i < q; i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+q);
        int temp = 0;
        for(i = 0; i < q; i++){
            for(j = n-1; j >= 0; j--){
                if(arr[i] > vect[j].second){
                    temp += vect[j].first;
                    vect[j].second = 40;
                    break;
                }
            }
        }
        printf("%d\n",temp);
    }
    return 0;
}
