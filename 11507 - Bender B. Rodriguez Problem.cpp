#include<bits/stdc++.h>

using namespace std;
int main()
{
  //  freopen("output.txt","w",stdout);
    int n;
    string ch;
    string bend;
    while(cin>>n){
        if(n == 0){
            break;
        }
        bend = "+x";
        int temp = 0;
        for(int i = 1; i < n; i++){
            cin>>ch;
            if(bend == "+z" && ch == "+z"){
                bend = "-x";
            }
            else if(bend == "+z" && ch == "-z"){
                bend = "+x";
            }
            else if(bend == "+y" && ch == "+y"){
                bend = "-x";
            }
            else if(bend == "+y" && ch == "-y"){
                bend = "+x";
            }
            else if(bend == "-z" && ch == "-z"){
                bend = "-x";
            }
            else if(bend == "-z" && ch == "+z"){
                bend = "+x";
            }
            else if(bend == "-y" && ch == "-y"){
                bend = "-x";
            }
            else if(bend == "-y" && ch == "+y"){
                bend = "+x";
            }
            else if(ch != "No"){
                if(bend == "-x"){
                    if(ch == "+z"){
                        bend = "-z";
                    }
                    else if(ch == "-z"){
                        bend = "+z";
                    }
                    else if(ch == "+y"){
                        bend = "-y";
                    }
                    else if(ch == "-y"){
                        bend = "+y";
                    }
                }
                else if(bend == "+x"){
                    bend = ch;
                }
            }
        }
        cout<<bend<<endl;
    }
    return 0;
}
