#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string ch;
    char ch1[10000];
    long int n,i,m,j,sum=0,temp,k=0;
    while(getline(cin,ch)){
        k=0;
        sum=0;
        temp=0;
        m=ch.length();
        for(i=0;i<m;i++){
            sum=0;
            for(j=0;j<m;j++){
               if(ch[i]==ch[j]){
                sum=sum+1;
               }
            }
            if(temp<=sum){
                temp=sum;
                ch1[k]=ch[i];
                k=k+1;
            }
        }

    }
    return 0;
}
