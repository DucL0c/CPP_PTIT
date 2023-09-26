#include <bits/stdc++.h>
using namespace std;
long long max(string &s){
    long long res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='5') res = res*10 + 6;
        else res = res*10 + s[i] - '0';
    }
    return res;
}
long long min(string &s){
    long long res=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='6') res = res*10 + 5;
        else res = res*10 + s[i] - '0';
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<min(a)+min(b)<<" "<<max(a)+max(b)<<endl;
    }
}