#include <bits/stdc++.h>
using namespace std;
int r=0;
class NhanVien{
    private:
        string mnv,ten,gt,ns,dc,mst,hd;
    public:
        NhanVien(){
            this -> mnv="000";
            this -> ten="";
            this -> gt="";
            this -> ns="";
            this -> dc="";
            this -> mst="";
            this -> hd="";
        }
        friend istream &operator >> (istream &is,NhanVien &a){
            r++;
            if(r<10) a.mnv += "0" + to_string(r);
            else a.mnv += to_string(r);
            if(r==1) is.ignore();
            getline(is,a.ten);
            getline(is,a.gt);
            getline(is,a.ns);
            getline(is,a.dc);
            getline(is,a.mst);
            getline(is,a.hd);
            return is;
        }
        friend ostream &operator << (ostream &os,NhanVien &a){
            os <<a.mnv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.hd<<endl;
            return os;
        }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}