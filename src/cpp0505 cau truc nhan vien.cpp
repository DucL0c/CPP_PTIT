#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string name;
    string sex;
    string birthday;
    string address;
    string ds;
    string sign;
};
void nhap(NhanVien &a){
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.birthday);
    getline(cin,a.address);
    getline(cin,a.ds);
    getline(cin,a.sign);
}
void in(NhanVien &a){
    cout<<"00001"<<" "<<a.name<<" "<<a.sex<<" "<<a.birthday<<" "<<a.address<<" "<<a.ds<<" "<<a.sign;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}