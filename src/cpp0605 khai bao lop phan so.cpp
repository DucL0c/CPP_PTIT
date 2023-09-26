#include <bits/stdc++.h>
using namespace std;
class PhanSo{
    private:
        long long tu,mau;
    public:
        PhanSo(long long,long long){
            this -> tu;
            this -> mau;
        }
        friend istream &operator >> (istream &is,PhanSo &a){
            is >> a.tu >> a.mau;
            return is;
        }
        friend ostream &operator << (ostream &os,PhanSo &a){
            os << a.tu <<"/"<< a.mau;
            return os;
        }
        void rutgon(){
            long long x = (__gcd(tu,mau));
            tu /= x;
            mau /= x;
        }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}