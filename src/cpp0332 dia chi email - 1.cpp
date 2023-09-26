#include <bits/stdc++.h>
using namespace std;
void lower(string &s){
    int n = s.length();
    for(int i=0;i<n;i++){
        s[i] = tolower(s[i]);
    }
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
    int n = v.size();
    cout<<v[n-1];
    for(int i=0;i<n-1;i++)
        cout<<v[i][0];
    cout<<"@ptit.edu.vn";
}