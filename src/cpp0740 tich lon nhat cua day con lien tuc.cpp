#include <bits/stdc++.h>
using namespace std;
//3
//5
//6 -3 -10 0 2
void solve(int a[],int n){
	long long max = a[0];
	for(int i=0;i<n;i++){
		long long tmp = 1;
		for(int j=i;j<n;j++){
			tmp = tmp*a[j];
			if(tmp>=max)	max = tmp;
		}
	}
	cout<<max<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		solve(a,n);
	}
}
