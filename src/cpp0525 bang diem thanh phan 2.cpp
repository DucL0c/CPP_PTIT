#include <bits/stdc++.h>
using namespace std;
struct sv{
    string msv,name,lop;
    double d1,d2,d3;
};
bool comp(sv a,sv b){
    return a.name<b.name;
}
void sap_xep(sv a[],int n){
    sort(a,a+n,comp);
}
int main(){
    struct sv a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].msv);
        getline(cin,a[i].name);
        getline(cin,a[i].lop);
        cin>>a[i].d1>>a[i].d2>>a[i].d3;
    }
    sap_xep(a,n);
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].lop<<" "<<setprecision(1)<<fixed<<a[i].d1<<" "<<a[i].d2<<" "<<a[i].d3<<endl;
    }
}
// B20DCCN999
// Nguyen Van Nam
// D20CQCN04-B
// 10.0
// 9.0
// 8.0
// B20DCAT001
// Le Van An
// D20CQAT02-B
// 6.0
// 6.0
// 4.0
// B20DCCN111
// Nguyen Van Binh
// D20CQCN01-B
// 9.0
// 5.0
// 6.0