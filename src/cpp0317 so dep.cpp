#include <bits/stdc++.h>
using namespace std;
int checkTN(string s){
    int n = s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            return 0;
    }
    return 1;
}
int checkSC(string s){
    int n = s.length();
    for(int i=0;i<n/2;i++){
        int x = s[i]-'0';        // '\0' A chuyen ve 65
        if(x%2!=0)
            return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        cin>>s;
        if(checkSC(s)&&checkTN(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}