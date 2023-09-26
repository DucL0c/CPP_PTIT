#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
    int t;
    cin>>t;
    while(t--){  //dung hoc ne
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long res=0;
        for(int i=0;i<n-1;i++){
            res = x*(res+a[i])%MOD;
        }
        res+=a[n-1];
        cout<<res<<endl;
    }
}