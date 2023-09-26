#include <bits/stdc++.h>
using namespace std;
void solve(int a[],int n,int k){
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += a[i];
    }
    int ans = sum;
    int index=0;
    for(int i=k;i<n;i++){
        sum -= a[i-k];
        sum += a[i];
        if(sum>=ans){
            ans = sum;
            index = i-k+1;

        }
    }
    for(int i=index;i<index+k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        solve(a,n,k);
    }
}