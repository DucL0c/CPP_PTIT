#include <bits/stdc++.h>
using namespace std;
int r=0;
class NhanVien{
    public:
        string mnv,ten,gt,ns,dc,mst,hd;
        string ngay,thang,nam;
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
            stringstream ss(a.ns);
            getline(ss,a.thang,'/');
            getline(ss,a.ngay,'/');
            getline(ss,a.nam,'/');
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
bool cmp(NhanVien &a,NhanVien &b){
    if(a.nam<b.nam) return true;
    if(a.nam>b.nam) return false;
    if(a.thang<b.thang) return true;
    if(a.thang>b.thang) return false;
    if(a.ngay<b.ngay) return true;
    return false;

}
void sapxep(NhanVien ds[],int n){
    sort(ds,ds+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}