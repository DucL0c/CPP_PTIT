#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv,ten,lop,email;
};
bool cmp(SinhVien &a,SinhVien &b){
    if(a.lop<b.lop) return true;
    if(a.lop>b.lop) return false;
    if(a.msv<b.msv) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    SinhVien a[n];
    cin.ignore();
    for(int i=0;i<n;i++){ 
        getline(cin,a[i].msv);
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].msv<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].email<<endl;
    }
}