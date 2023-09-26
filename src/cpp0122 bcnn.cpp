#include <bits/stdc++.h>
using namespace std;
long long bcnn(long long a,long long b){
    return a*b/__gcd(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x = 1;
        for(int i=2;i<=n;i++){
            x = bcnn(x,i);
        }
        cout<<x<<endl;
    }
}