#include<iostream>
int binary(int);
int hexa(int);
using namespace std;
int main()
{
    int n,i,m,f,value;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>value;
        m=binary(value);
        f=hexa(value);
        cout<<m<<" "<<f<<endl;
    }
    return 0;
}
int binary(int n){
    int sum=0,i;
    for(i=1; ;i++){
        if(n%2!=0){
            sum=sum+1;
        }
        n=n/2;
        if(n==0){
            break;
        }
    }
    return sum;
}
int hexa(int n){
    int sum=0,i,a;
    for(i=1; ;i++){
       a=n%10;
       if(a==1){
            sum=sum+1;
       }
       else if(a==2){
        sum=sum+1;
       }
       else if(a==3){
        sum=sum+2;
       }
       else if(a==4){
        sum=sum+1;
       }
       else if(a==5){
        sum=sum+2;
       }
       else if(a==6){
        sum=sum+2;
       }
       else if(a==7){
        sum=sum+3;
       }
       else if(a==8){
        sum=sum+1;
       }
       else if(a==9){
        sum=sum+2;
       }
       n=n/10;
       if(n==0){
        break;
       }
    }
    return sum;
}
