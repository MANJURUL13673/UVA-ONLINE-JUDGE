#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b;
    string ch;
    cin>>n;
    for(i=1;i<=n;i++){
       cin>>ch;
        //cout<<ch<<endl;
       a=(ch[0]-'0')*10+(ch[1]-'0');
      //  cout<<a<<endl;
       b=(ch[3]-'0')*10+(ch[4]-'0');
      // cout<<b<<endl;
       if(a==12&&b==0){
         cout<<"12:00"<<endl;
       }
       else{
        if(b==0){
            if(12-a>=10){
                cout<<12-a<<":00"<<endl;
            }
            else if(12-a<10){
                cout<<"0"<<12-a<<":00"<<endl;
            }
        }
        else if(b<=50){
            if(12-a-1>=10&&12-a-1>0){
                cout<<12-a-1<<":"<<60-b<<endl;
            }
            else if(12-a-1<10&&12-a-1>0){
                cout<<"0"<<12-a-1<<":"<<60-b<<endl;
            }
            else if(12-a-1==0){
                cout<<"12:"<<60-b<<endl;
            }
            else{
                cout<<"11:"<<60-b<<endl;
            }
        }
        else if(b>50){
            if(12-a-1>=10){
                cout<<12-a-1<<":0"<<60-b<<endl;
            }
            else if(12-a-1<10&&12-a-1>0){
                cout<<"0"<<12-a-1<<":0"<<60-b<<endl;
            }
            else if(12-a-1==0){
                cout<<"12:0"<<60-b<<endl;
            }
            else{
                cout<<"11:0"<<60-b<<endl;
            }
        }
       }
    }
    return 0;
}
