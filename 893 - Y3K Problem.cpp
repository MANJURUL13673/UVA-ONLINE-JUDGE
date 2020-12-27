#include<bits/stdc++.h>
using namespace std;

int main()
{
    int remain,day,month,year;
    while(cin>>remain>>day>>month>>year){
        if(remain == 0 && day == 0 && month == 0 && year == 0){
            break;
        }
        for(int i = 1; i <= remain; i++){
            day++;
            if(month == 1 && day == 32){
                month = 2;
                day = 1;
            }
            else if(month == 2){
                if(((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){
                    if(day == 30){
                        day = 1;
                        month = 3;
                    }

                }
                else{
                    if(day == 29){
                        day = 1;
                        month = 3;
                    }
                }
            }
            else if(month == 3 && day == 32){
                day = 1;
                month = 4;
            }
            else if(month == 4 && day == 31){
                day = 1;
                month = 5;
            }
            else if(month == 5 && day == 32){
                day = 1;
                month = 6;
            }
            else if(month == 6 && day == 31){
                day = 1;
                month = 7;
            }
            else if(month == 7 && day == 32){
                day = 1;
                month = 8;
            }
            else if(month == 8 && day == 32){
                day = 1;
                month = 9;
            }
            else if(month == 9 && day == 31){
                day = 1;
                month = 10;
            }
            else if(month == 10 && day == 32){
                day = 1;
                month = 11;
            }
            else if(month == 11 && day == 31){
                day = 1;
                month = 12;
            }
            else if(month == 12 && day == 32){
                day = 1;
                month = 1;
                year++;
            }
        }
        cout<<day<<" "<<month<<" "<<year<<endl;
    }
    return 0;
}
