#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,z,n;
        cin>>x>>y>>z>>n;
        long long c = x*y/__gcd(x,y);
        long long bcnn = c*z/__gcd(c,z);
        long long dau = pow(10,n-1); 
        long long cuoi = pow(10,n);
        long long a=dau/bcnn;
        long long b=cuoi/bcnn;
        if(b<1&&a<1){ 
            cout<<"-1"<<endl; 
            continue; 
        } 
        if(a*bcnn<dau){ 
            a++; cout<<a*bcnn<<endl; 
        } 
        else{ 
            cout<<a*bcnn<<endl;
        } 
    }
}