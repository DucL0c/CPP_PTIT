#include <bits/stdc++.h>
using namespace std;
struct gv{
    string mgv,ht,bm,vtb;
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
        a[i].vtb="";
        if(r<10) a[i].mgv += "0" + to_string(r);
        else a[i].mgv += to_string(r);
        getline(cin,a[i].ht);
        getline(cin,a[i].bm);
        stringstream ss(a[i].bm);
        string tmp;
        while(ss>>tmp){
            a[i].vtb += toupper(tmp[0]);
        }
    }
    int t;
    cin>>t;
    string s;
    cin.ignore();
    while(t--){
        getline(cin,s);
        stringstream vv(s);
        string t="";
        while(vv>>s){
            t += toupper(s[0]);
        }
        cout<<"DANH SACH GIANG VIEN BO MON "<<t<<":"<<endl;
        for(int i=0;i<n;i++){
            if(t==a[i].vtb){
                cout<<a[i].mgv<<" "<<a[i].ht<<" "<<a[i].vtb<<endl;
            }
        }
    }
}