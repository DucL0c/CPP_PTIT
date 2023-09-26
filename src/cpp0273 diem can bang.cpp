#include <bits/stdc++.h>
using namespace std;
int solve(int a[],int n){
    int sum=0,leftsum = 0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    for(int i=1;i<n-1;i++){
        int res = sum;
        leftsum += a[i-1];
        if(leftsum == res - leftsum - a[i]){
            return i+1;
        }
    }
    return -1;
}
// 2
// 7
// -7 1 5 2 -4 3 0
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(a,n)<<endl;
    }
}