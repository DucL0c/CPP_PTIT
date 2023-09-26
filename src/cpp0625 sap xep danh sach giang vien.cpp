#include <bits/stdc++.h>
using namespace std;
struct gv{
    string mgv,ten,mon,mh,lname;
};
bool cmp(gv &a,gv &b){
    if(a.lname==b.lname) return a.mgv<b.mgv;
    return a.lname<b.lname;
}
int r=0;
int main(){
    int n;
    cin>>n;
    gv a[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        ++r;
        a[i].mh = "";
        a[i].mgv = "GV";
        if(r<10) a[i].mgv +="0"+to_string(r);
        else a[i].mgv += to_string(r);
        getline(cin,a[i].ten);
        stringstream vv(a[i].ten);
        vector<string> v;
        string s;
        while(vv>>s){
            v.push_back(s);
        }
        a[i].lname = v[v.size()-1];
        getline(cin,a[i].mon);
        stringstream ss(a[i].mon);
        string tmp;
        while(ss>>tmp){
            a[i].mh += toupper(tmp[0]);
        }
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].mgv<<" "<<a[i].ten<<" "<<a[i].mh<<endl;
    }
}