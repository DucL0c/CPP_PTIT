#include <bits/stdc++.h>
using namespace std;
//2
//5
//1 2 3 -2 5
long long max(long long a,long long b){
	if(a>b) return a;
	return b;
}
void solve(int a[],int n){
    long long sum=0;
    long long res=-1e18;
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            d = 1;
        }
    }
    if(d==0){
        cout<<"-1"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        sum += a[i];
        res = max(res,sum);
        if(sum<0){
        	sum = 0;
		}
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        solve(a,n);
    }
}
