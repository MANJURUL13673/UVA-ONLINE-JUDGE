#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592653589793
int main()
{
    long double a,angle1,angle2,c;
    while(cin>>a){
        if(cin.eof()){
            break;
        }
        angle1 = (108*pi)/180;
        angle2 = (63*pi)/180;
        c = (a/sin(angle2))*sin(angle1);
        cout<<fixed<<setprecision(10)<<c<<endl;
    }
    return 0;
}
