#include <bits/stdc++.h>
using namespace std;
// 1
// 5 3
// 1 2 3 4 5
// 1 2 3
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        set<int> hop,s1,s2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            hop.insert(a[i]);
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            hop.insert(b[i]);
            s2.insert(b[i]);
        }
        for(auto x:hop){
        	cout<<x<<" ";
		}
		cout<<endl;
		for(auto x:s1){
			if(s2.find(x)!=s2.end()){
				cout<<x<<" ";
			}
		}
		cout<<endl;
    }
}










// #include<bits/stdc++.h>

// using namespace std;

// #define mp make_pair
// #define fi first
// #define se second
// #define pb push_back
// #define sz size()
// #define ll long long
// #define FOR(i, a, b) for(int i = a; i <= b; ++i)
// #define FORD(i, a, b) for(int i = a; i >= b; --i)
// #define F(i, a, b) for(int i = a; i < b; ++i)
// #define FD(i, a, b) for(int i = a; i > b; --i)
// #define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
// #define vi vector<int>
// #define vll vector<ll>
// #define vb vector<bool>
// #define endl '\n'

// int main()
// {
//     faster();
//     int t, n, m, x;
//     cin >> t;
//     while(t--)
//     {
//         set<int> Hop, a, b;
//         cin >> n >> m;
//         FOR(i, 1, n)
//         {
//             cin >> x;
//             Hop.insert(x);
//             a.insert(x);
//         }
//         FOR(i, 1, m)
//         {
//             cin >> x;
//             Hop.insert(x);
//             b.insert(x);
//         }
//         for(int i : Hop) cout << i << ' ';
//         cout << endl;
//         for(int i : a) if(b.find(i) != b.end()) cout << i << ' ';
//         cout << endl;
//     }
//     return 0;
// }
