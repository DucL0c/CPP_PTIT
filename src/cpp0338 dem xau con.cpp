#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string s;
        cin>>s>>k;
        int dem=0;
        for(int i=0;i<s.length();i++){
            set<char> se;
            for(int j=i;j<s.length();j++){
                se.insert(s[j]);
                if(se.size()==k){
                    dem++;
                }
                else if(se.size()>k)
                    break;
            }
        }
        cout<<dem<<endl;
    }
}




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     getchar();
//     while(t--){
//         string s;
//         int k;
//         cin>>s>>k;
//         int n = s.length();
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int cnt[256];
//             memset(cnt,0,sizeof(cnt));
//             int dem=0;
//             for(int j=i;j<n;j++){
//                 if(cnt[s[j]]==0) dem++;
//                 if(dem==k) ans++;
//                 if(dem>k) break;
//                 cnt[s[j]]=1;
//             }
//         }
//         cout<<ans<<endl;
//     }
// }