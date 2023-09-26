#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,name,lop,bd;
        float gpa;
    public:
        SinhVien(){
            this -> msv = "B20DCCN001";
            this -> name = "";
            this -> lop = "";
            this -> bd = "";
            this -> gpa = 0;
        }
        void nhap(){
            getline(cin,name);
            getline(cin,lop);
            getline(cin,bd);
            cin>>gpa;
            if(bd[1]=='/') bd.insert(bd.begin(),'0');
            if(bd[4]=='/') bd.insert(bd.begin()+3,'0');
        }
        void xuat(){
            cout<<msv<<" "<<name<<" "<<lop<<" "<<bd<<" "<<setprecision(2)<<fixed<<gpa;
        }   
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}