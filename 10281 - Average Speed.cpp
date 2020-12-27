#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    char c;
    double h,m,s,speed;
    double inith,initm,inits;
    double sum = 0.0;
    int temp = 0;
    while((scanf("%lf:%lf:%lf",&h,&m,&s)) == 3){
        scanf("%c",&c);
        if(c == ' '){
            if(temp == 1){
                int second = ((h-inith)*3600)+((m-initm)*60)+(s-inits);
                sum += (double)((speed * second)/3600);
            }
            inith = h;
            initm = m;
            inits = s;
            scanf("%lf",&speed);
            c = '\n';
        }
        else if(c == '\n'){
            int second = ((h-inith)*3600)+((m-initm)*60)+(s-inits);
            sum += (double)((speed * second)/3600);
            if(h <= 9){
                printf("0%0.0lf",h);
            }
            else{
                printf("%0.0lf",h);
            }
            printf(":");
            if(m <= 9){
                printf("0%0.0lf",m);
            }
            else{
                printf("%0.0lf",m);
            }
            printf(":");
            if(s <= 9){
                printf("0%0.0lf",s);
            }
            else{
                printf("%0.0lf",s);
            }
            printf(" ");
            cout<<setprecision(2)<<fixed<<sum<<" km"<<endl;
            inith = h;
            initm = m;
            inits = s;
        }
        temp = 1;
    }
    return 0;
}
