#include <bits/stdc++.h>
using namespace std;
struct ds{
    string name,bd,d,m,y;
};
int r=0;
void inpuT(ds &a){
    r++;
    if(r==1) cin.ignore();
    getline(cin,a.name);
    stringstream ss(a.name);
    getline(ss,a.bd,' ');
    getline(ss,a.d,'/');
    getline(ss,a.m,'/');
    getline(ss,a.y,'/');
}
bool comp(ds &a,ds &b){
    if(a.y>b.y) return true;
    if(a.y<b.y) return false;
    if(a.m>b.m) return true;
    if(a.m<b.m) return false;
    if(a.d>b.d) return true;
    return false;
}
void sap_xep(ds a[],int n){
    sort(a,a+n,comp);
}
int main(){
    struct ds a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        inpuT(a[i]);
    }
    sap_xep(a,n);
    cout<<a[0].bd<<endl<<a[n-1].bd;
}