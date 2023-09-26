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
    int t;
    cin>>t;
    while(t--){
        int c,b;
        cin>>b>>c;
        cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<b<<" DEN "<<c<<" SINH VIEN:"<<endl;
        for(int i=0;i<n;i++){
            if(a[i].sosv>=b && a[i].sosv<=c){
                cout<<a[i].mdn<<" "<<a[i].tendn<<" "<<a[i].sosv<<endl;
            }
        }
    }
}