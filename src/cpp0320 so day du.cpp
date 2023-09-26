#include <bits/stdc++.h>
using namespace std;
int checkVL(char c){
    if(c<48 || c>57)
        return 0;
    return 1;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int d=1;
        int b[1000]={0};
        for(int i=0;i<n;i++){
            if(s[0]=='0' || !checkVL(s[i]))
                d=0;
            else b[s[i]-'0']++;
        }
        if(d==0) cout<<"INVALID"<<endl;
        else{
            int x=1;
            for(int i=0;i<=9;i++){
                if(b[i]==0){
                    x = 0;
                    break;
                }
            }
            if(x==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}