#include<iostream>
using namespace std;
int main()
{
    int a,b,num;
    int arr[20];
    int temp;
    int fuc;
    int k = 0;
    while(cin>>num)
    {
        k++;
        if(num == 0)
        {
            break;
        }
        if(k != 1){
            cout<<endl;
        }
        fuc = 0;
        for(int i = 1000; i <= 99999; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                arr[j] = -1;
            }
            int n = i;
            temp = 0;
            while(n != 0)
            {
                if(arr[n % 10] == -1)
                {
                    arr[n % 10] = 1;
                }
                else
                {
                    temp = 1;
                    break;
                }
                n = n/10;
            }
            if(num * i > 99999){
                break;
            }
            if(temp == 0)
            {
                a = num * i;
                n = a;
                while(n != 0)
                {
                    if(arr[n % 10] == -1)
                    {
                        arr[n % 10] = 1;
                    }
                    else
                    {
                        temp = 1;
                        break;
                    }
                    n = n/10;
                }
            }
            if(temp == 0){
                if(i <= 9999 && arr[0] == -1 && a >= 10000){
                    cout<<a<<" / 0"<<i<<" = "<<num<<endl;
                    fuc = 1;
                }
                else if(i > 9999 && a >= 10000){
                     cout<<a<<" / "<<i<<" = "<<num<<endl;
                     fuc = 1;
                }
            }
        }
        if(fuc == 0){
            cout<<"There are no solutions for "<<num<<endl;
        }
    }
    return 0;
}
