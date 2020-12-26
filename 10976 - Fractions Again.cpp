#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    vector<int>prime1;
    vector<int>prime2;
    while(scanf("%d",&k) == 1){
        for(int i = 10000; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                if((k*(i+j)) == (i*j)){
                    prime1.push_back(i);
                    prime2.push_back(j);
                }
            }
        }
        cout<<prime1.size()<<endl;
        for(int i = 0; i < prime1.size(); i++){
            cout<<"1/"<<k<<" = 1/"<<prime1[i]<<" + 1/"<<prime2[i]<<endl;
        }
        prime1.clear();
        prime2.clear();
    }
    return 0;
}
