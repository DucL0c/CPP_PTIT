#include <bits/stdc++.h>
using namespace std;
//12346 4   - 4 12 16 24 36 124 246 1236  
//4 12 24 124
// 1 13 14 12 124 123 1234
// 2 24 23 234
// 3 34
// 4
void solve(string s,int m,int n){
    int dem=0;
    for(int i=0;i<m;i++){
        long long ans = s[i]-'0';
        if(ans%n==0) dem++;
        for(int j=i+1;j<m;j++){
            long long a = ans;
            int k = j+1;
            while(k<m){
                int b = a*10 + s[k]-'0';
                if(b%n==0) dem++;
                k++;
            }
            ans = ans*10 + s[j]-'0';
            if(ans%n==0) dem++;
        }
    }
    cout<<dem<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int m,n;
        cin>>m>>n;
        cin>>s;
        solve(s,m,n);
    }
}