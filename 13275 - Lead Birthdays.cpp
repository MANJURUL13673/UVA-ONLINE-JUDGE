#include<iostream>
using namespace std;
bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}
int main()
{
    int test,d,m,y,qy;
    cin>>test;
    int i,j;
    int sum = 0;
    for(i = 1; i <= test; i++){
        cin>>d>>m>>y>>qy;
        cout<<"Case "<<i<<": ";
        sum = 0;
        if(d != 29 || m != 2){
            cout<<qy-y<<endl;
        }
        else{
            for(j = y+4; j <= qy; j = j+4){
                bool ar = isLeapYear(j);
                if(ar == true){
                    sum++;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
