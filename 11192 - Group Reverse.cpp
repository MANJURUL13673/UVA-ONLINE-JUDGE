#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    int n;
    while(cin>>n && n != 0){
        cin>>ch;
        int k = ch.length();
        int far = k / n;
      //  cout<<far<<endl;
        for(int m = 0; m < k; m = m+far){
           for(int j = (m+far-1); j >= m ; j--){
                cout<<ch[j];
           }
        }
        cout<<endl;
    }
    return 0;
}
