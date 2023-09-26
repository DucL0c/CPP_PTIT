#include <bits/stdc++.h>
using namespace std;
void solve(string s,string t){
    int str[256]={0};
    int f[256]={0};
    if(s.length()<t.length()){
        cout<<"-1"<<endl; 
        return;
    }
    for(int i=0;i<t.length();i++)
        f[t[i]]++;
    int cnt = 0;
    int start = 0;
    int ans = INT_MAX;
    int check = -1;
    for(int i=0;i<s.length();i++){
        str[s[i]]++;
        if(str[s[i]]<=f[s[i]] && f[s[i]]!=0)
            cnt++;
        if(cnt==t.length()){
            while(f[s[start]]==0 || str[s[start]]>f[s[start]]){
                if(str[s[start]]>f[s[start]]){
                    str[s[start]]--;
                }
                start++;
            }
            if(i-start+1 < ans){
                ans = i-start+1;
                check = start;
            }
        }
    }
    if(check==-1) cout<<-1<<endl;
    else cout<<s.substr(check,ans)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        solve(s1,s2);
    }
}