#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589793

int main()
{
    double x1,y1,x2,y2,x3,y3,ans,a,b,c,r;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        if(cin.eof()){
            break;
        }
        a = hypot(x1-x2,y1-y2);
        b = hypot(x1-x3,y1-y3);
        c = hypot(x2-x3,y2-y3);
        r = (a*b*c)/(sqrt((a+b+c)*(b+c-a)*(a+b-c)*(a+c-b)));
        ans = 2*pi*r;
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}
