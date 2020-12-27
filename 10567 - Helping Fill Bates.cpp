#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch,arr;
    int n;
    vector<int>siz[200];
    cin>>ch>>n;
    for(int i = 0; i < ch.length(); i++){
        siz[ch[i]].push_back(i);
    }
    int temp;
    int car[200];
    int var,pos1,pos2;;
    while(n--){
        cin>>arr;
        temp = 0;
        memset(car,0,sizeof(car));
        for(int i = 0; i < arr.length();i++){
            var = 0;
            for(int j = car[arr[i]]; j < siz[arr[i]].size(); j++){
                if(siz[arr[i]][j] >= temp){
                //    cout<<arr[i]<<endl;
                    temp = siz[arr[i]][j]+1;
                    car[arr[i]] = j+1;
                    var = 1;
                    if(i == 0){
                        pos1 = siz[arr[i]][j];
                    }
                    else if(i == arr.length()-1){
                        pos2 = siz[arr[i]][j];
                    }
                    break;
                }
            }
            if(var == 0){
                break;
            }
        }
        if(var == 0){
            cout<<"Not matched"<<endl;
        }
        else{
            cout<<"Matched "<<pos1<<" "<<pos2<<endl;
        }
    }
    return 0;
}
