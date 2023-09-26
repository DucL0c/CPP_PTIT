#include <bits/stdc++.h>
using namespace std;
int powMod(long long x,long long y,long long z){
    long long res = 1;
    while(y){
        if(y%2==1){
            res = res*x%z;
        }
        x = x*x%z;
        y/=2;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,p;
        cin>>x>>y>>p;
        cout<<powMod(x,y,p)<<endl;
    }
}