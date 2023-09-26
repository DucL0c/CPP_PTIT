#include <bits/stdc++.h>
using namespace std;
long long powMod(long long a/*res*/,long long b,long long M){
    long long res=1;
    while(b!=0){
        if(b%2!=0  ){//4 2 1 
            res = ((res%M)*(a%M))%M;
        }
        a = ((a%M)*(a%M))%M;
        b/=2;  //b=3 1
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string a;//3
        long long b,M;
        cin>>a>>b>>M;
        long long res=0;
        for(int i=0;i<a.length();i++){
            res = (res*10 + a[i]-'0')%M;   //2%3=1
        }
        cout<<powMod(res,b,M)<<endl;
    }
}