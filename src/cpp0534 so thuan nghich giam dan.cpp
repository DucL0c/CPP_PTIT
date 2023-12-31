#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    int n = s.length();
    int i=0,j=n-1;
    if(n<2) return false;
    while(i<j){
        if(s[i]!=s[j])
            return false;
        i++;j--;
    }
    return true;
}
bool cmp(pair<string,int> &a,pair<string,int> &b){
	if(a.first.length()>b.first.length()) return 1;
	if(a.first.length()<b.first.length()) return 0;
	for(int i=0;i<a.first.length();i++){
		if(a.first[i]>b.first[i]) return 1;
		if(a.first[i]<b.first[i]) return 0;
	}
}
int main(){
	string s;
    map<string, int> m;
    while(cin >> s) if(check(s)) ++m[s];
    vector<pair<string,int>> v;
    for(auto i:m){
    	v.push_back(i);
	}
	sort(v.begin(),v.end(),cmp);
    for(auto i:v){
    	cout<<i.first<<" "<<i.second<<endl;
	}
}








//#include<bits/stdc++.h>
//
//using namespace std;
//
//#define mp make_pair
//#define fi first
//#define se second
//#define pb push_back
//#define sz size()
//#define ll long long
//#define FOR(i, a, b) for(int i = a; i <= b; ++i)
//#define FORD(i, a, b) for(int i = a; i >= b; --i)
//#define F(i, a, b) for(int i = a; i < b; ++i)
//#define FD(i, a, b) for(int i = a; i > b; --i)
//#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//#define vi vector<int>
//#define vll vector<ll>
//#define vb vector<bool>
//#define endl '\n'
//
//bool check(string &a)
//{
//    if(a.length() == 1) return 0;
//    int len = a.length() / 2;
//    F(i, 0, len) if(a[i] != a[a.length() - i - 1]) return 0;
//    return 1;
//}
//
//bool cmp(pair<string, int> &a, pair<string, int> &b)
//{
//    if(a.fi.length() > b.fi.length()) return 1;
//    if(a.fi.length() < b.fi.length()) return 0;
//    F(i, 0, a.fi.length())
//    {
//        if(a.fi[i] > b.fi[i]) return 1;
//        if(a.fi[i] < b.fi[i]) return 0;
//    }
//}
//
//int main()
//{
//    faster();
//    string s;
//    map<string, int> m;
//    while(cin >> s) if(check(s)) ++m[s];
//    for(auto x:m){
//    	cout<<x.first<<" "<<x.second<<endl;
//	}
//    vector<pair<string, int>> vp;
//    for(auto i : m) vp.pb(i);
//    sort(vp.begin(), vp.end(), cmp);
//    for(auto i : vp) cout << i.fi << ' ' << i.se << endl;
//    return 0;
//}
