#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    string str="";
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            sum+= s[i]-'0';
        }
        else{
            str += s[i];
        }
    }
    sort(str.begin(),str.end());
    cout<<str<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
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
//         getline(cin,s);
//         int n = s.length();
//         int sum=0;
//         for(int i=0;i<n;i++){
//             if(s[i]>=49&&s[i]<=57){
//                 sum += s[i]-'0';
//                 s.erase(i,1);
//                 n--;
//                 i--;
//             }
//             if(s[i]==48){
//                 s.erase(i,1);
//                 n--;
//                 i--;
//             }
//         }
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(s[i]>s[j]) swap(s[i],s[j]);
//             }
//         }
//         if(sum!=0) cout<<s<<sum-'\0'<<endl;
//         else cout<<s<<endl;
//     }
// }