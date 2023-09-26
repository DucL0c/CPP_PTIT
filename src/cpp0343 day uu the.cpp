#include <bits/stdc++.h>
using namespace std;
int checkC(string s){
    int n = s.length();//32
    if(s[n-1]!='0' && s[n-1]!='2' && s[n-1]!='4' &&s[n-1]!='6' && s[n-1]!='8')
        return 0;
    return 1;
}
int main(){
    int t;
    cin>>t;
    getchar();
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        int n = v.size();
        int demC=0,demL=0;
        for(int i=0;i<n;i++){
            if(checkC(v[i])) demC++;
            else demL++;
        }
        if(n%2==0 && demC>demL)
            cout<<"YES"<<endl;
        else if(n%2!=0 && demL>demC)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}