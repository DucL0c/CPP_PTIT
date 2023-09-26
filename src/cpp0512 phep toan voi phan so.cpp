#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tu;
    long long mau;
};
void rutGon(PhanSo &x){
    long long gcd = __gcd(x.tu,x.mau);
    x.tu /= gcd;
    x.mau/= gcd;
}
void process(PhanSo &a,PhanSo &b){
    if(b.mau!=0){
        PhanSo c;
        c.tu = (a.tu*b.mau)+(b.tu*a.mau);
        c.mau= b.mau*a.mau;
        rutGon(c);
        cout<<(c.tu)*(c.tu)<<"/"<<(c.mau)*(c.mau)<<" ";
        PhanSo d;
        d.tu = a.tu*b.tu*c.tu*c.tu;
        d.mau = a.mau*b.mau*c.mau*c.mau;
        rutGon(d);
        cout<<d.tu<<"/"<<d.mau;
        cout<<endl;
    }
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}