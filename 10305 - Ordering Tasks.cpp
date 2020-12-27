#include<bits/stdc++.h>
using namespace std;

int main()
{
 //   freopen("output.txt","w",stdout);
    int n,m,a,b;
    vector<int>arr[105];
    bool color[105];
    vector<int>node;
    while(true){
        cin>>n>>m;
        if(n == 0 || m == 0){
            break;
        }
        memset(color,false,sizeof(color));
        node.clear();
        for(int i = 0; i < m; i++){
            cin>>a>>b;
            arr[a].push_back(b);
        }
        int temp,far;
        while(true){
            far = 0;
            for(int j = 1; j <= n; j++){
                temp = 0;
                if(color[j] == false){
                    for(int k = 1; k <= n; k++){
                        if(color[k] == false){
                            for(int r = 0; r < arr[k].size(); r++){
                                if(arr[k][r] == j){
                                    temp = 1;
                                    break;
                                }
                            }
                            if(temp == 1){
                                break;
                            }
                        }
                    }
                    if(temp == 0){
                        node.push_back(j);
                        far = 1;
                    }
                }
            }
            for(int i = 0; i < node.size(); i++){
                color[node[i]] = true;
            }
            if(far == 0){
                break;
            }
         //   cout<<1<<endl;
        }
        for(int i = 0; i < node.size(); i++){
            cout<<node[i];
            if(i != node.size()-1){
                cout<<" ";
            }
        }
        for(int i = 1; i <= n; i++){
            arr[i].clear();
        }
        cout<<endl;
    }
    return 0;
}
