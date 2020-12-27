#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    int n,j,i,start,temp,k = 1;
    while(cin>>ch){
        if(ch == "end"){
            break;
        }
        cout<<"Case "<<k<<": ";
        k++;
        stack<char>arr[1002];
        n = ch.length();
        start = 0;
     //   temp = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j <= start; j++){
                if(arr[j].empty()){
                    arr[j].push(ch[i]);
                    start++;
            //        temp = 0;
                    break;
                }
                else if(arr[j].top() >= ch[i]){
                    arr[j].push(ch[i]);
              //      temp = 1;
                    break;
                }
            }
        }
        cout<<start<<endl;
    }
    return 0;
}
