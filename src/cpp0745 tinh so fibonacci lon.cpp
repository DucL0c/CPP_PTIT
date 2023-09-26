#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int solve(int n){
    long long f[1000];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i] = (f[i-1]%MOD+f[i-2]%MOD)%MOD;
    }
    return f[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}