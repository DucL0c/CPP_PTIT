#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i] = a[i]*a[i];
        }
        int d=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long x = a[i]+a[j];
                if(binary_search(a,a+n,x)){
                    d=1;
                }
            }
        }
        if(d==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}