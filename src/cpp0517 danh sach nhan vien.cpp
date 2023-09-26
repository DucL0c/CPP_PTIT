#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name;
    string sex;
    string birthday;
    string address;
    string fax;
    string sign;
    string ms;
};
int r=0;
void nhap(NhanVien &x){
    r++;
    if(r==1) cin.ignore();
    getline(cin,x.name);
    getline(cin,x.sex);
    getline(cin,x.birthday);
    getline(cin,x.address);
    getline(cin,x.fax);
    getline(cin,x.sign);
    if(r<10){
        x.ms = "0000" + to_string(r);
    }
    else{
        x.ms = "000" + to_string(r);
    }
}
void inds(NhanVien x[],int N){
    for(int i=0;i<N;i++){
        cout<<x[i].ms<<" "<<x[i].name<<" "<<x[i].sex<<" "<<x[i].birthday<<" "<<x[i].address<<" "<<x[i].fax<<" "<<x[i].sign<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
