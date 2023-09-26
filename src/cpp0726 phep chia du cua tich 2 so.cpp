#include <bits/stdc++.h>
using namespace std;
long long solve(string a,long long b,long long c){
    long long res = 0;
    for(int i=0;i<a.length();i++){
        res = (res*10 + (a[i]-'0')*b)%c; 
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        long long b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<endl;
    }
}