#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
void solve(long long a[],int n){
	long long g=a[0];
	for(int i=1;i<n;i++){
		long long x = a[i];
		g = __gcd(g,x);
	}
	long long s=1;
	for(int i=0;i<n;i++){
		s = (s%MOD*a[i]%MOD)%MOD;
	}
	long long res = s;
	for(int i=1;i<g;i++){
		res = (res%MOD * s%MOD)%MOD;
	}
	cout<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
	 	}
	 	solve(a,n);
	}
}
