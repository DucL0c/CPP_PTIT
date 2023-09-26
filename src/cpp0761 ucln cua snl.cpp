#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a;
    string b;
    cin>>a>>b;
    long long res=0;
    for(int i=0;i<b.length();i++){
        res = (res*10 + b[i]-'0')%a;
    }
    cout<<__gcd(a,res)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}