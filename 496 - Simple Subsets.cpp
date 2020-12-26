#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int arr1[200000],arr2[200000];
    char c;
    int far;
    int man = 0;
    while(!cin.eof()){
        int temp = 0;
        int fuc = 0;
        while((scanf("%d%c",&arr1[temp++],&c)) == 2){
        //    cout<<arr1[temp-1]<<endl;
            if(fuc == 0){
                fuc++;
            }
            if(c == '\n'){
                break;
            }
        }
      //  cout<<fuc<<endl;
        far = 0;
        man = 0;
        int temp2 = 0;
        while((scanf("%d%c",&arr2[temp2++],&c) == 2)){
            if(fuc == 1){
                fuc++;
            }
            if(c == '\n'){
                 break;
              }
        }
        if(fuc != 2){
            break;
        }
        if(temp == temp2){
            int far = 0;
            for(int i = 0; i < temp; i++){
                for(int j = 0; j < temp2; j++){
                    if(arr1[i] == arr2[j]){
                        far++;
                    }
                }
            }
            if(far == temp){
                printf("A equals B\n");
            }
            else if(far > 0){
                printf("I'm confused!\n");
            }
            else{
                printf("A and B are disjoint\n");
            }
        }
        else if(temp < temp2){
            int pos = 0;
            far = 0;
            for(int i = 0; i < temp; i++){
                for(int j = pos; j < temp2; j++){
                    if(arr1[i] == arr2[j]){
                        far++;
                  //      arr2[j] = -13673;
                        break;
                    }
                }
            }
            if(far == temp){
                printf("A is a proper subset of B\n");
            }
            else if(far > 0){
                printf("I'm confused!\n");
            }
            else{
                printf("A and B are disjoint\n");
            }
        }
        else{
            int pos = 0;
            far = 0;
            for(int i = 0; i < temp2; i++){
                for(int j = 0; j < temp; j++){
                    if(arr2[i] == arr1[j]){
                        far++;
                 //       arr1[j] = -13673;
                        break;
                    }
                }
            }
            if(far == temp2){
                printf("B is a proper subset of A\n");
            }
            else if(far > 0){
                printf("I'm confused!\n");
            }
            else{
                printf("A and B are disjoint\n");
            }
        }
    }
    return 0;
}
