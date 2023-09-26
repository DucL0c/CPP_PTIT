#include <bits/stdc++.h>
using namespace std;
int checkMM(string s){
    int n=s.length();
    int sum=0;
    for(int i=0;i<n;i++){
        int x = s[i]-'0';
        sum += x;
    }
    if(sum!=0 && sum%9==0) return 1;
    else return 0;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        cin>>s;
        if(checkMM(s)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}