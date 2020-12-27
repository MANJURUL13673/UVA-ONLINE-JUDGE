#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int n;
    cin>>n;
    float q = 0;
    for(int i = 1; i<= n; i++){
        cin>>ch;
        q = 0;
        int m = ch.length();
        int sum;
        for(int j = 0; j<m; j++){
            if(ch[j] == 'C' || ch[j] == 'H' || ch[j] == 'N' || ch[j] == 'O'){
                sum = 0;
                if(ch[j+1] >= '0' && ch[j+1] <= '9' && (j+1) < m){
                    sum = sum+(ch[j+1] - '0');
                    if(ch[j+2] >= '0' && ch[j+2] <= '9' && (j+2) < m){
                        sum = sum*10 + (ch[j+2] - '0');
                    }
                }
                if(sum == 0){
                    if(ch[j] == 'C'){
                        q = q+12.01;
                    }
                    else if(ch[j] == 'H'){
                        q = q+1.008;
                    }
                    else if(ch[j] == 'O'){
                        q = q+16.00;
                    }
                    else{
                        q = q+14.01;
                    }
                }
                else{
                    if(ch[j] == 'C'){
                        q = q+(12.01 * sum);
                    }
                    else if(ch[j] == 'H'){
                        q = q+(1.008 * sum);
                    }
                    else if(ch[j] == 'O'){
                        q = q+(16.00 * sum);
                    }
                    else{
                        q = q+(14.01 * sum);
                    }
                }
            }
        }
        cout<<fixed<<setprecision(3)<<q<<endl;
    }
    return 0;
}
