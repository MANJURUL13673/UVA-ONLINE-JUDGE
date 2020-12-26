#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int r,c,test;
    scanf("%d",&test);
    while(test--){
        scanf("%c%d%d",&ch,&r,&c);
        if(ch == 'r'){
            cout<<min(r,c)<<endl;
        }
        else if(ch == 'k'){
            if((r*c)%2 == 0){
                cout<<(r*c)/2<<endl;
            }
            else{
                cout<<((r*c)/2)+1<<endl;
            }
        }
        else if(ch == 'K'){
            int temp1,temp2;
            if(r % 2 == 0){
                temp1 = r/2;
            }
            else{
                temp1 = r/2+1;
            }
            if(c % 2 == 0){
                temp2 = c/2;
            }
            else{
                temp2 = c/2+1;
            }
            cout<<temp1*temp2<<endl;
        }
        else{
            cout<<min(r,c)<<endl;
        }
    }
    return 0;
}
