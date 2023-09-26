#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,ten,lop,ns;
        float gpa;
    public:
        SinhVien(){
            this -> msv = "B20DCCN001";
            this -> ten = "";
            this -> lop = "";
            this -> ns = "";
            this -> gpa = 0;
        }
        friend istream &operator >> (istream &is,SinhVien &a){
            string s;
            getline(is,s);
            stringstream ss(s);
            string tmp;
            while(ss>>tmp){
                tmp[0] = toupper(tmp[0]);
                for(int i=1;i<tmp.length();i++){
                    tmp[i] = tolower(tmp[i]);
                }
                a.ten += tmp + " ";
            }
            a.ten.erase(a.ten.end()-1);
            getline(is,a.lop);
            getline(is,a.ns);
            is >> a.gpa;
            if(a.ns[1]=='/') a.ns.insert(a.ns.begin(),'0');
            if(a.ns[4]=='/') a.ns.insert(a.ns.begin()+3,'0');
            return is;
        }
        friend ostream &operator << (ostream &os,SinhVien &a){
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