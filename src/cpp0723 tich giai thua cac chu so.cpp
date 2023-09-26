#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string a;
    cin>>n>>a;
    string s="";
    for(int i=0;i<a.length();i++){
        if(a[i]=='1'||a[i]=='0') s+="1";
        else if(a[i]=='2') s += "2";
        else if(a[i]=='3') s += "3";
        else if(a[i]=='4') s += "223";
        else if(a[i]=='5') s += "5";
        else if(a[i]=='6') s += "35";
        else if(a[i]=='7') s += "7";
        else if(a[i]=='8') s += "2227";
        else if(a[i]=='9') s += "3327";
    }
    sort(s.begin(),s.end(),greater<char>());
    int c = s.length();
    while(s[c-1] == '1' || s[c-1] == '0'){
        s.erase(c-1,1);
        c--;
    }
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}