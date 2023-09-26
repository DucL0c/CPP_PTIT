#include <bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string mnv,ten,gt,ns,dc,mst,hd;
    public:
        void nhap();
        void xuat();
        // friend istream &operator >> (istream &is,NhanVien &a){
        //     a.mnv = "00001";
        //     getline(is,a.ten);
        //     getline(is,a.gt);
        //     getline(is,a.ns);
        //     getline(is,a.dc);
        //     getline(is,a.mst);
        //     getline(is,a.hd);
        //     return is;
        // }
        // friend ostream &operator << (ostream &os,NhanVien &a){
        //     os << a.mnv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.hd;
        //     return os;
        // }
};
void NhanVien::nhap(){
    mnv = "00001";
    getline(cin,ten);
    getline(cin,gt);
    getline(cin,ns);
    getline(cin,dc);
    getline(cin,mst);
    getline(cin,hd);
}
void NhanVien::xuat(){
    cout<< mnv<<" "<<ten<<" "<<gt<<" "<<ns<<" "<<dc<<" "<<mst<<" "<<hd;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}