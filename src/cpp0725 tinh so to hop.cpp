#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long c[1005][1005];
void solve(){
    for(int i=0;i<1005;i++){
        for(int j=0;j<=i;j++){
            if(i==0||j==0){
                c[i][j]=1;
            }
            else{
                c[i][j]=(c[i-1][j]%MOD+c[i-1][j-1]%MOD)%MOD;
            }
        }
    }
}
int main(){
    solve();
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        cout<<c[n][r]<<endl;
    }
}