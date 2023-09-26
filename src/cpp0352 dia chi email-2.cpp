#include <bits/stdc++.h>
using namespace std;
void lower(string &s){
    int n = s.length();
    for(int i=0;i<n;i++)
        s[i]=tolower(s[i]);
}
int main(){
    int n;
    cin>>n;
    vector<string> vc;
    getchar();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        lower(s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        int c = v.size();
        string res = v[c-1];
        for(int i=0;i<c-1;i++){
            res += v[i][0];
        }
        vc.push_back(res);
    }
    for(int i=0;i<vc.size()-1;i++){
        int d=50;
        for(int j=i+1;j<vc.size();j++){
            if(vc[i]==vc[j]){
                vc[j] += d;
                d++;
            }
        }
    }
    for(int i=0;i<vc.size();i++)
        cout<<vc[i]<<"@ptit.edu.vn"<<endl;
}