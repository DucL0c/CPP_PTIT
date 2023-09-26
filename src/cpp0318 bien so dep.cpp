#include <bits/stdc++.h>
using namespace std;
int kt1(string s){
    for(int i=0;i<s.length()-1;i++)
        if(s[i]-'0'>=s[i+1]-'0')
            return 0;
    return 1;
}
int kt2(string s){
    int d=1;
    for(int i=0;i<s.length()-1;i++)
        if(s[i]!=s[i+1])
            d = 0;
    if(d==1) return 1;
    return 0;
}
int kt3(string s){
    int d=1;
    for(int i=0;i<2;i++)
        if(s[i]!=s[i+1])
            d = 0;
    for(int i=3;i<4;i++)
        if(s[i]!=s[i+1])
            d = 0;
    if(d==1) return 1;
    return 0;
}
int kt4(string s){
    int d=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='8'||s[i]=='6')
            d++;
    if(d==5) return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s,a="";
        getline(cin,s);
        for(int i=5;i<s.length();i++)
            if(isdigit(s[i]))
                a += s[i];
        if(kt1(a)||kt2(a)||kt3(a)||kt4(a)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}