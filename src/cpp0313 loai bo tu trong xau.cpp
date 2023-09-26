#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string xoa;
    getline(cin,s);
    getline(cin,xoa);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){
        v.push_back(tmp);
    }
    for(int i=0;i<v.size();i++)
        if(v[i]!=xoa)
            cout<<v[i]<<" ";
}