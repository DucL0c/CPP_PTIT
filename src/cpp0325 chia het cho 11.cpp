#include <bits/stdc++.h>
using namespace std;
int checkCH11(string s){
    int n = s.length();
    int sum0=0,sum1=0;
    for(int i=0;i<n;i++){
        int x = s[i]-'0';
        if(i%2==0)  sum0+=x;
        else sum1+=x;
    }
    if((sum0-sum1)%11!=0) return 0;
    return 1;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        if(checkCH11(s)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}