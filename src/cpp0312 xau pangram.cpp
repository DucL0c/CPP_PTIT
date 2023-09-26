#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        cin>>s;
        int k;
        cin>>k;
        set<char> se;
        for(int i=0;i<s.length();i++)
            se.insert(s[i]);
        int dem = se.size();
        if((k+dem)>=26) cout<<"1"<<endl;
        else cout<<"0"<<endl;
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
//         cin>>s;
//         int k;
//         cin>>k;
//         int b[100000]={0};
//         for(int i=0;i<s.length();i++)
//             b[s[i]]++;
//         int dem=0;
//         for(int i=0;i<s.length();i++){
//             if(b[s[i]]!=0){
//                 dem++;
//                 b[s[i]] = 0;
//             }
//         }
//         if((k+dem)>=26) cout<<"1"<<endl;
//         else cout<<"0"<<endl;
//     }
// }