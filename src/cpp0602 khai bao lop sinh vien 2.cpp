#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,ten,lop,ns;
        float gpa;
    public:
        SinhVien(){
            this->msv= "B20DCCN001";
            this->ten= "";
            this->lop= "";
            this->ns= "";
            this->gpa= 0;
        }
        friend istream &operator >> (istream &is, SinhVien &a){
            getline(is,a.ten);
            getline(is,a.lop);
            getline(is,a.ns);
            is >> a.gpa;
            if(a.ns[1]=='/') a.ns.insert(a.ns.begin(),'0');
            if(a.ns[4]=='/') a.ns.insert(a.ns.begin()+3,'0');
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien &a){
            os<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<setprecision(2)<<fixed<<a.gpa;
            return os;
        }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}