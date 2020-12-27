#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    string ch;
    int sum;
    int man,far;
    for(int i = 1; i<=test; i++){
        cin>>ch;
        cout<<"Case "<<i<<": ";
        int n = ch.length();
        for(int j = 0; j<n; j++){
            sum = 0;
            if(ch[j] >= '1' && ch[j] <= '9'){
                man = j;
                sum = (sum * 10)+(ch[j] - '0');
                if(ch[j+1] >= '0' && ch[j+1] <= '9'){
                    sum = (sum * 10)+(ch[j+1] - '0');
                    j++;
                    if(ch[j+1] >= '0' && ch[j+1] <= '9'){
                        sum = (sum * 10)+(ch[j+1] - '0');
                        j++;
                    }
                }
                for(int k = 0; k < sum; k++){
                    cout<<ch[man-1];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

