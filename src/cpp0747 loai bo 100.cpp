#include <bits/stdc++.h>
using namespace std;
int solve(string s){
    int s1=0,s2=1,s3=2;
    int n=s.length();
    int ans=0;
    if(n<3) return 0;
    while(s3<n){
        if(s[s1]=='1' && s[s2]=='0' && s[s3]=='0'){
            ans+=3;
            if(s1>=1){
                if(s[s1-1]=='1'){
                    s1--;
                    s2 = s3+1;
                    s3 = s2+1;
                }
                else if(s[s1-2]=='1'){
                    s1 = s1-2;
                    s2 = s2-2;
                    s3 = s3+1;
                }
                else{
                    s1 = s3+1;
                    s2 = s1+1;
                    s3 = s2+1;
                }
            }
            else{
                s1 = s3+1;
                s2 = s1+1;
                s3 = s2+1;
            }
        }
        else{
            s1++;
            s2++;
            s3++;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(solve(s)==0) cout<<"";
        else cout<<solve(s)<<endl;
    }
}