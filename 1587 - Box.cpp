#include<iostream>
using namespace std;
int main()
{
    int arr1[1000],arr2[1000],arr[1000];
    int temp1,temp2,i,j;
    while(true)
    {
        for(i = 0; i < 12; i++)
        {
            cin>>arr[i];
        }
        if(cin.eof())
        {
            break;
        }
        temp1 = 0;
        temp2 = 0;
        for(i = 0; i < 6; i++)
        {
            arr1[i] = -1;
        }
        for(i = 0; i < 12; i = i+2)
        {
            if(arr1[i/2] == -1)
            {
                arr1[i/2] = i/2;
                for(j = i+2; j < 12; j++)
                {
                    if(arr[i] == arr[j])
                    {
                        if(j % 2 == 0)
                        {
                            if(arr[i+1] == arr[j+1] && arr1[j/2] == -1)
                            {
                        //        cout<<i/2<<" "<<j/2<<endl;
                                temp1++;
                                arr1[j/2] = i/2;
                                break;
                            }
                        }
                        else if(j % 2 != 0)
                        {
                            if(arr[i+1] == arr[j-1] && arr1[j/2] == -1)
                            {
                         //       cout<<i/2<<" "<<j/2<<endl;
                                temp1++;
                                arr1[j/2] = i/2;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(temp1 != 3)
        {
          //  cout<<temp1<<endl;
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            int far = 0;
            for(i = 0; i < 12; i = i+2){
                temp2 = 0;
                for(j = 0; j < 12; j++){
                    if(arr1[i/2] != arr1[j/2]){
                        if(arr[i] == arr[j] || arr[i+1] == arr[j]){
                            temp2++;
                        }
                    }
                }
                if(temp2 < 4){
                    far = 1;
                    break;
                }
            }
            if(far == 1){
                cout<<"IMPOSSIBLE"<<endl;
            }
            else{
                cout<<"POSSIBLE"<<endl;
            }
        }
    }
    return 0;
}
