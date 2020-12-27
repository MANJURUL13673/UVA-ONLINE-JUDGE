#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    int n;
    int i;
    int temp = 0;
    int temp1,temp2,temp3,temp4,temp5;
    while(cin>>ch){
        if(cin.eof()){
            break;
        }
        if(temp != 0){
            cout<<endl;
        }
        temp = 1;
        temp1 = 0;
        temp2 = 0;
        temp3 = 0;
        n = ch.length();
        for(i = 0; i < n; i++){
            temp1 = (temp1 * 10) + (ch[i] - '0');
            temp2 = (temp2 * 10) + (ch[i] - '0');
            temp3 = (temp3 * 10) + (ch[i] - '0');
            temp4 = (temp4 * 10) + (ch[i] - '0');
            temp5 = (temp5 * 10) + (ch[i] - '0');
            if(temp1 >= 15){
                temp1 = temp1 % 15;
            }
            if(temp2 >= 55){
                temp2 = temp2 % 55;
            }
            if(temp3 >= 400){
                temp3 = temp3 % 400;
            }
            if(temp4 >= 4){
                temp4 = temp4 % 4;
            }
            if(temp5 >= 100){
                temp5 = temp5 % 100;
            }
        }
        if(temp3 == 0 || (temp4 == 0 && temp5 != 0)){
            cout<<"This is leap year."<<endl;
        }
        if(temp1 == 0){
            cout<<"This is huluculu festival year."<<endl;
        }
        if((temp3 == 0 || (temp4 == 0 && temp5 != 0)) && temp2 == 0){
            cout<<"This is bulukulu festival year."<<endl;
        }
        if(!(temp3 == 0 || (temp4 == 0 && temp5 != 0)) && temp1 != 0){
            cout<<"This is an ordinary year."<<endl;
        }
    }
    return 0;
}
