#include <bits/stdc++.h>
using namespace std;
void lower(string &s){
    int n = s.length();
    for(int i=0;i<n;i++)
        s[i] = tolower(s[i]);
}
void tou(string &s){
    int n = s.length();
    for(int i=0;i<n;i++)
        s[i] = toupper(s[i]);
}
int main(){
    string s;
    getline(cin,s);
    lower(s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss>>tmp){
        v.push_back(tmp);
    }
    int n=v.size();
    for(int i=0;i<n-1;i++)
        v[i][0] = toupper(v[i][0]);
    for(int i=0;i<n-1;i++){
        if(i==n-2) cout<<v[i]<<", ";
        else cout<<v[i]<<" ";
    }
    string x = v[n-1];
    tou(x);
    cout<<x;
}