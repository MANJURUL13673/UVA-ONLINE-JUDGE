#include<iostream>
using namespace std;
int main()
{
    char ch[1000][1000];
    int n,m;
    int i,j;
    int sum;
    int k = 1;
    while(cin>>n>>m && n != 0 && m != 0){
        if(k != 1){
            cout<<endl;
        }
        cout<<"Field #"<<k<<":"<<endl;
        k++;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
               cin>>ch[i][j];
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                sum = 0;
                if(ch[i][j] == '*'){
                    cout<<ch[i][j];
                }
                else if(ch[i][j] == '.'){
                    if((i - 1) >= 0 && ch[i-1][j] == '*'){
                        sum++;
                    }
                    if((i - 1) >= 0 && (j - 1) >= 0 && ch[i-1][j-1] == '*')
                    {
                        sum++;
                    }
                    if((i - 1) >= 0 && (j + 1) < m && ch[i-1][j+1] == '*'){
                        sum++;
                    }
                    if((j-1) >= 0 && ch[i][j-1] == '*'){
                        sum++;
                    }
                    if((j+1) < m && ch[i][j+1] == '*'){
                        sum++;
                    }
                    if((i + 1) < n && ch[i+1][j] == '*'){
                        sum++;
                    }
                    if((i + 1) < n && (j - 1) >= 0 && ch[i+1][j-1] == '*'){
                        sum++;
                    }
                    if((i + 1) < n && (j + 1) < m && ch[i+1][j+1] == '*'){
                        sum++;
                    }
                    cout<<sum;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
