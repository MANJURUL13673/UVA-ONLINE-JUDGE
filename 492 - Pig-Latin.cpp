#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int n,i,f,m,a,j,sum=0;
    string ch;
    while(getline(cin,ch)){
        n=ch.length();
        for(i=0;i<n;i++){
            if((ch[i]=='a'||ch[i]=='i'||ch[i]=='e'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='O'||ch[i]=='E'||ch[i]=='I'||ch[i]=='U')&&((ch[i-1]<97&&ch[i-1]>90)||ch[i-1]<65||ch[i-1]>122||i==0)){
                sum=0;
                for(j=i; ;j++){
                    if((ch[j]>=97&&ch[j]<=122)||(ch[j]>=65&&ch[j]<=90)){
                        cout<<ch[j];
                    }
                    else{
                        break;
                    }
                    sum=sum+1;
                }
                i=i+sum-1;
                cout<<"ay";
            }
            else if(((ch[i]>=97&&ch[i]<=122)||(ch[i]>=65&&ch[i]<=90))&&(ch[i]!='a'&&ch[i]!='i'&&ch[i]!='e'&&ch[i]!='o'&&ch[i]!='u'&&ch[i]!='A'&&ch[i]!='O'&&ch[i]!='E'&&ch[i]!='I'&&ch[i]!='U')&&((ch[i-1]<97&&ch[i-1]>90)||ch[i-1]<65||ch[i-1]>122||i==0)){
                sum=0;
                f=i;
                for(j=i+1; ;j++){
                   if((ch[j]>=97&&ch[j]<=122)||(ch[j]>=65&&ch[j]<=90)){
                        cout<<ch[j];
                    }
                    else{
                        break;
                    }
                    sum=sum+1;
                }
                i=i+sum;
                cout<<ch[f]<<"ay";
            }
            else{
                cout<<ch[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
