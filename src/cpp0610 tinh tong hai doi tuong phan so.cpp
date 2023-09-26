#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(!b) return a;
    return gcd(b,a%b);
}
class PhanSo{
    private:
        long long tu,mau;
    public:
        PhanSo(long long,long long){
            this -> tu;
            this -> mau;
        }
        void rutgon(){
            long long x = (gcd(tu,mau));
            this -> tu /= x;
            this -> mau /= x;
        }
        void quydong(PhanSo &a){
            this -> rutgon();
            a.rutgon();
            long long lcm = this -> mau*a.mau/gcd(this->mau,a.mau);
            this -> tu *= lcm/this -> mau;
            a.tu *= lcm/a.mau;
            this->mau = a.mau = lcm;
        }
        PhanSo &operator + (PhanSo &a){
            this -> quydong(a);
            this -> tu = this -> tu + a.tu;
            this -> rutgon();
            return *this;
        }
        friend istream &operator >> (istream &is,PhanSo &a){
            is >> a.tu >> a.mau;
            return is;
        }
        friend ostream &operator << (ostream &os,PhanSo &a){
            os << a.tu <<'/'<< a.mau;
            return os;
        }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}