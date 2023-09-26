#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv,name,clasS;
    double d1,d2,d3;
};
void nhap(SinhVien &a){
    cin.ignore();
    getline(cin,a.msv);
    getline(cin,a.name);
    getline(cin,a.clasS);
    cin>>a.d1>>a.d2>>a.d3;
}
bool comp(SinhVien a,SinhVien b){
    return a.msv<b.msv;
}
void sap_xep(SinhVien a[],int n){
    sort(a,a+n,comp);
}
void in_ds(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].clasS<<" ";
        printf("%.1f %.1f %.1f\n",a[i].d1,a[i].d2,a[i].d3);
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
// B20DCCN999
// Nguyen Van An
// D20CQCN04-B
// 10.0
// 9.0
// 8.0
// B20DCAT001
// Le Van Nam
// D20CQAT02-B
// 6.0
// 6.0
// 4.0
// B20DCCN111
// Tran Hoa Binh
// D20CQCN04-B
// 9.0
// 5.0
// 6.0