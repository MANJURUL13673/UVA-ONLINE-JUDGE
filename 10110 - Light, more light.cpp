#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch1[100005],ch2[100005];
    int n;
    int l;
    int temp;
    scanf("%d ",&n);
    for(int i = 1; i<=n; i++){
        gets(ch1);
        int f = strlen(ch1);
        int q;
        scanf("%d ",&q);
        for(int j = 1; j <= q; j++){
            gets(ch2);
            l = strlen(ch2);
            for(int k = 0; k < f ; k++){
                temp = 10;
                if(ch2[0] == ch1[k]){
                    cout<<ch1[0]<<" "<<ch1[k]<<endl;
                    temp = 1;
                    for(int z = 1; z < l; z++){
                        if(ch2[z] == ch1[k+1]){
                            temp = 1;
                            k++;
                        }
                        else{
                            temp = 0;
                            break;
                        }
                    }
                }
                if(temp == 0 || temp == 1){
                    break;
                }
            }
            if(temp == 0 || temp == 10){
                cout<<"n"<<endl;
            }
            else{
                cout<<"y"<<endl;
            }
        }
    }
    return 0;
}
