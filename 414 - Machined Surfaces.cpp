#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[16];
    char ch[28];
    int n,i,j;
    while((scanf("%d",&n))){
        if(n == 0){
            break;
        }
        scanf(" ");
        int temp = 0;
        for(i = 0; i < n; i++){
            gets(ch);
            int sum = 0;
            int k = strlen(ch);
            for(j = 0; j < 25; j++){
                if(ch[j] == 'X'){
                    sum++;
                }
            }
            arr[i] = sum;
            if(temp < sum){
                temp = sum;
            }
        }
        int sum = 0;
        for(i = 0; i < n ;i++){
            sum += temp - arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
