#include <bits/stdc++.h>
using namespace std;
int check(char a){
    char s = towlower(a);
    if(s =='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='y')
        return 1;
    return 0;
}
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i=0;i<n;i++){
        if(check(s[i])) continue;
        char x = towlower(s[i]);
        cout<<'.'<<x;
    }
}