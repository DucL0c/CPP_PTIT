#include <bits/stdc++.h>
using namespace std;
typedef struct{
    string tt,msv,name,lop,mail,dn;
}nv;
int r=0;
void inpuT(nv a[],int n){
    for(int i=0;i<n;i++){
        ++r;
        if(r==1) cin.ignore();
        a[i].tt += to_string(r);
        getline(cin,a[i].msv);
        getline(cin,a[i].name);
        getline(cin,a[i].lop);
        getline(cin,a[i].mail);
        getline(cin,a[i].dn);
    }
}
bool cmp(nv &a,nv &b){
    return a.msv<b.msv;
}
// void outpuT(nv a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i].msv<<" "<<a[i].name<<" "<<a[i].lop<<" "<<a[i].mail<<" "<<a[i].dn<<endl;
//     }
// }
int main(){
    int n,q;
    cin>>n;
    nv a[n];
    inpuT(a,n);
    sort(a,a+n,cmp);
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s==a[i].dn){
                cout<<a[i].tt<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].lop<<" "<<a[i].mail<<" "<<a[i].dn<<endl;
            }
        }
    }
}