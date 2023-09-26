#include <bits/stdc++.h>
using namespace std;
void ans(string s){
    string res="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='A' || s[i]=='B' || s[i]=='C' || s[i]=='a'|| s[i]=='b'|| s[i]=='c') res+="2";
        if(s[i]=='D' || s[i]=='d' || s[i]=='E' || s[i]=='e'|| s[i]=='F'|| s[i]=='f') res+="3";
        if(s[i]=='G' || s[i]=='g' || s[i]=='H' || s[i]=='h'|| s[i]=='I'|| s[i]=='i') res+="4";
        if(s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='J'|| s[i]=='K'|| s[i]=='L') res+="5";
        if(s[i]=='M' || s[i]=='N' || s[i]=='O' || s[i]=='m'|| s[i]=='n'|| s[i]=='o') res+="6";
        if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S'|| s[i]=='p'|| s[i]=='q'||s[i]=='r'||s[i]=='s') res+="7";
        if(s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='t'|| s[i]=='u'|| s[i]=='v') res+="8";
        if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z'|| s[i]=='w'|| s[i]=='x'||s[i]=='y'||s[i]=='z') res+="9";    
    }
    int n = res.length();
    int d = 1;
    for(int i=0;i<n/2;i++){
        if(res[i]!=res[n-i-1]){
            d=0;
        }
    }
    if(d==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ans(s);       
    }
}