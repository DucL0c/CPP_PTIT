#include <bits/stdc++.h>
using namespace std;
struct gv{
    string mgv,ht,bm,vtm,tk,tt;
};
int r=0;
int main(){
    int n;
    cin>>n;
    gv a[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        ++r;
        a[i].mgv="GV";
        a[i].vtm="";
        if(r<10) a[i].mgv += "0" + to_string(r);
        else a[i].mgv += to_string(r);
        getline(cin,a[i].ht);
        a[i].tt = a[i].ht;
        for(int j=0;j<a[i].ht.length();j++) a[i].ht[j] = toupper(a[i].ht[j]);
        getline(cin,a[i].bm);
        stringstream ss(a[i].bm);
        string tmp;
        while(ss>>tmp){
            a[i].vtm += toupper(tmp[0]);
        }
    }
    int t;
    cin>>t;
    string s;
    cin.ignore();
    while(t--){
        getline(cin,s);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
        for(int i=0;i<s.length();i++){
            s[i] = toupper(s[i]);
        }
        stringstream ss(s);
        vector<string> v;
        while(ss>>s){
            v.push_back(s);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<v.size();j++){
                if(a[i].ht.find(v[j])!=-1){
                    cout<<a[i].mgv<<" "<<a[i].tt<<" "<<a[i].vtm<<endl;
                }
            }
        }
    }
}