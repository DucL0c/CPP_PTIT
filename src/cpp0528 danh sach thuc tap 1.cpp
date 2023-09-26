#include <bits/stdc++.h>
using namespace std;
typedef struct{
    string tt,msv,name,lop,email,dn;
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
        getline(cin,a[i].email);
        getline(cin,a[i].dn);
    }
}
bool cmp(nv &a,nv &b){
    return a.name<b.name;
}
void sap_xep(nv a[],int n){
    sort(a,a+n,cmp);
}
// void outpuT(nv a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i].msv<<" "<<a[i].name<<" "<<a[i].lop<<" "<<a[i].email<<" "<<a[i].dn<<endl;
//     }
// }
int main(){
    int n,q;
    cin>>n;
    nv ds[n];
    inpuT(ds,n);
    //outpuT(ds,n);
    cin>>q;
    sap_xep(ds,n);
    while(q--){
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s==ds[i].dn){
                cout<<ds[i].tt<<" "<<ds[i].msv<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].email<<" "<<ds[i].dn<<endl;
            }
        }
    }
}