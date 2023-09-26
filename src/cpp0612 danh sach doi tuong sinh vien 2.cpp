#include <bits/stdc++.h>
using namespace std;
int r=0;
class SinhVien{
    private:
        string msv,ten,lop,ns;
        float gpa;
    public:
        SinhVien(){
            this->msv="B20DCCN0";
            this->ten="";
            this->lop="";
            this->ns="";
            this->gpa=0;
        }
        friend istream &operator >> (istream &is,SinhVien &a){
            r++;
            is.ignore();
            if(r<10) a.msv += "0" + to_string(r);
            else a.msv += to_string(r);
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
            if(a.ns[1]=='/') a.ns.insert(a.ns.begin(),'0');
            if(a.ns[4]=='/') a.ns.insert(a.ns.begin()+3,'0');
            cin>>a.gpa;
            return is;
        }
        friend ostream &operator << (ostream &os,SinhVien &a){
            os <<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<setprecision(2)<<fixed<<a.gpa<<endl;
            return os;
        }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}