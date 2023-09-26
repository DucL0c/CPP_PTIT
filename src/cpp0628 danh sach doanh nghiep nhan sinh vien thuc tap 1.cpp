#include <bits/stdc++.h>
using namespace std;
struct dn{
  string mdn,tendn;
  int sosv;  
};
bool cmp(dn &a,dn &b){
    if(a.sosv==b.sosv) return a.mdn<b.mdn;
    return a.sosv>b.sosv;
}
int main(){
    int n;
    cin>>n;
    dn a[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].mdn);
        getline(cin,a[i].tendn);
        cin>>a[i].sosv;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].mdn<<" "<<a[i].tendn<<" "<<a[i].sosv<<endl;
    }
}