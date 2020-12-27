#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define MAX 500
unsigned long long int  fib[MAX];


void preCalFib(){
 int i;
 fib[1] = 1;
 fib[2] = 2;
 for(i=3;i<=46;i++){
   fib[i] = fib[i-2] + fib[i-1];
 }
}


int getIndexOf(unsigned long long int fib1){
   int from,to,cen,send=-1;

   for(from=1;from<46;from++){
    if(fib[from]==fib1){
      send = from;
      break;
    }
   }

  return send;
}

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int testCase;
    scanf("%d",&testCase);

    preCalFib();

    unsigned long long int num[MAX];

    while(testCase--){
       int n;
       scanf("%d",&n);

       unsigned long long   int max = 0;
       for(int i=0;i<n;i++){
           scanf("%llu",&num[i]);
           if(max<num[i])max = num[i];
       }

       getchar();
       char input[MAX];
       gets(input);


       char output[MAX]="";

       for(int m=0;m<=getIndexOf(max)+1;m++)strcat(output," ");

       output[getIndexOf(max)] = '\0';


       int l=0;
       for(int s=0;s<n;s++){
           while(!isupper(input[l]))l++;

           output[getIndexOf(num[s])-1] = input[l];
           l++;
       }

printf(output);
printf("\n");

    }




    return 0;
}
