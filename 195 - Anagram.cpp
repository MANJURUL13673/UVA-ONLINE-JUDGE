#include <bits/stdc++.h>
using namespace std;

// Returns true if str[curr] matches with any of the
// characters after str[start]
bool shouldSwap(string str, int start, int curr, int n)
{
    for (int i = start; i < curr; i++)
        if (str[i] == str[curr])
            return 0;
    return 1;
}

// Prints all distinct permutations in str[0..n-1]
void findPermutations(string str, int index, int n)
{
    if (index >= n) {
        cout << str << endl;
        return;
    }
    for(int i = index; i < (n); i++){
        for(int j = index; j < (n-1); j++){
            if(toupper(str[j]) != toupper(str[j+1]) && toupper(str[j]) > toupper(str[j+1])){
                swap(str[j],str[j+1]);
            }
            else if(toupper(str[j]) == toupper(str[j+1]) && str[j] > str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
    for (int i = index; i < n; i++) {
        bool check = shouldSwap(str, index, i, n);
        if (check) {
            swap(str[index], str[i]);
            findPermutations(str, index + 1, n);
            swap(str[index], str[i]);
        }
    }
}

// Driver code
int main()
{
    freopen("output.txt","w",stdout);
    int test;
    cin>>test;
    string str;
    while(test--){
        cin>>str;
       // sort(str.begin(),str.end());
        int n = str.length();
        findPermutations(str, 0, n);
    }
    return 0;
}
