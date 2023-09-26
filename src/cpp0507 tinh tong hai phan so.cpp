#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tu;
    long long mau;
};
void nhap(PhanSo &x){
    cin>>x.tu>>x.mau;
}
PhanSo tong(PhanSo &p,PhanSo &q){
    long long gcdP = __gcd(p.tu,p.mau);
    long long gcdQ = __gcd(q.tu,q.mau);
    long long xP = p.tu/gcdP;
    long long yP = p.mau/gcdP;
    long long xQ = q.tu/gcdQ;
    long long yQ = q.mau/gcdQ;
    long long z = __gcd(yP,yQ);
    long long bcNN = yP*yQ/z;
    long long a = (bcNN/yP)*xP;
    long long b = (bcNN/yQ)*xQ;
    PhanSo ans;
    ans.tu = a+b;
    ans.mau = bcNN;
    return ans;
}
void in(PhanSo &t){
    cout<<t.tu<<"/"<<t.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
    PhanSo t = tong(p,q);
	in(t);
	return 0;
}