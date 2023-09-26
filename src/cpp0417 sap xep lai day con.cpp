#include <bits/stdc++.h>
using namespace std;
// 2
// 11
// 10 12 20 30 25 40 32 31 35 50 60
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v1.push_back(a[i]);
        }
        v2 = v1;
        sort(v2.begin(),v2.end());
        int start = INT_MAX;
        int end = INT_MIN;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                if(i<start) start = i+1;
                else end = i+1;
            }
        }
        cout<<start<<" "<<end<<endl;
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
//     int t, n, x;
//     cin >> t;
//     while(t--)
//     {
//         cin >> n;
//         vi v1, v2;
//         F(i, 0, n)
//         {
//             cin >> x;
//             v1.pb(x);
//         }
//         v2 = v1;
//         sort(v2.begin(), v2.end());
//         F(i, 0, v1.sz)
//         {
//             if(v1[i] != v2[i])
//             {
//                 cout << i + 1 << ' ';
//                 break;
//             }
//         }
//         FORD(i, v1.sz - 1, 0)
//         {
//             if(v1[i] != v2[i])
//             {
//                 cout << i + 1 << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }