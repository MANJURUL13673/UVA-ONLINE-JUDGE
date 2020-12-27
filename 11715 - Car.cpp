#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double a1,a2,a3,a4,a,s;
    int i = 1;
    while(true){
        cin>>a1;
        if(a1 == 0){
            break;
        }
        cout<<"Case "<<i<<": ";
        i++;
        cin>>a2>>a3>>a4;
        if(a1 == 1){
            a = (a3 - a2)/a4;
            s = (a2 * a4) + (0.5 * a * a4 * a4);
            cout<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<a<<endl;
        }
        else if(a1 == 2){
            a = (a3 - a2)/a4;
            s = (a2 * a) + (0.5 * a4 * a * a);
            cout<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<a<<endl;
        }
        else if(a1 == 3){
            a = sqrt((a2 * a2) + (2 * a3 * a4));
            s = (2 * a4) / (a2 + a);
            cout<<fixed<<setprecision(3)<<a<<" "<<fixed<<setprecision(3)<<s<<endl;
        }
        else if(a1 == 4){
            a = sqrt((a2 * a2) - (2 * a3 * a4));
            s = (2 * a4) / (a2 + a);
            cout<<fixed<<setprecision(3)<<a<<" "<<fixed<<setprecision(3)<<s<<endl;
        }
    }
    return 0;
}
