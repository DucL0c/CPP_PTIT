#include <bits/stdc++.h>
using namespace std;
//1
//11 4
//2 1 2 5 7 1 9 3 6 8 8
//2 1 8 3
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		map<int, int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		for(int i=0;i<m;i++){
			int tmp = mp[b[i]];
			for(int j=0;j<tmp;j++){
				cout << b[i] << " ";
				mp[b[i]]--;
			}
		}
		vector<int> v;
		for(int i=0;i<n;i++){
			if(mp[a[i]]!=0){
				v.push_back(a[i]);
			}
		}
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}