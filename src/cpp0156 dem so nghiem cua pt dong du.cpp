#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long b,q;
        cin>>b>>q;
        int dem=0;
        for(int i=1;i<=b;i++){
            if(((i%q)*(i%q))%q==1){
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}