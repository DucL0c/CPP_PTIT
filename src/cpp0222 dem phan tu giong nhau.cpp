#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        set<int> s[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                s[i].insert(a[i][j]);
            }
        }
        int ans = 0;
        for(auto x:s[0]){
            int check = 1;
            for(int i=1;i<n;i++){
                if(s[i].find(x)==s[i].end()){
                    check = 0;
                    break;
                }
            }
            if(check==1) ans++;
        }
        cout<<ans<<endl;
    }
}















// #include <bits/stdc++.h>
// using namespace std;
// // 1
// // 4
// // 2 1 4 3 1 2 3 2 3 6 2 3 5 2 5 3
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n][n];
//         map<int, int> m;    
//         for(int i=0;i<n;i++)
//             for(int j=0;j<n;j++)
//                 cin>>a[i][j];
//         for(int j=0;j<n;j++) m[a[0][j]]++;
//         for(int i=1;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(m[a[i][j]]==i){
//                     m[a[i][j]]++;
//                 }
//             }
//         }
//         int dem=0;
//         for(auto x:m){
//             if(x.second==n){
//                 dem++;
//             }
//         }
//         cout<<dem<<endl;
//     }
// }
