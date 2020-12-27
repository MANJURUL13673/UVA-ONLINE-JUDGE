
#include<bits/stdc++.h>
using namespace std;
int lcs(string ch1,string ch2,int m,int n)
{
    int siz[m+1][n+1];
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0){
                siz[i][j] = 0;
            }
            else if(ch1[i-1] == ch2[j-1]){
                siz[i][j] = 1 + siz[i-1][j-1];
            }
            else{
                siz[i][j] = max(siz[i-1][j],siz[i][j-1]);
            }
        }
    }
    return siz[m][n];
}
int main()
{
    string ch1,ch2;
    while(getline(cin,ch1) && getline(cin,ch2)){
        if(cin.eof()){
            break;
        }
        int m = ch1.length();
        int n = ch2.length();
        int k = lcs(ch1,ch2,m,n);
        cout<<k<<endl;
    }
    return 0;
}
