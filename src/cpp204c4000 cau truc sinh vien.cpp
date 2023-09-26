#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name;
    string classA;
    string age;
    float point;
};
void standardD(SinhVien &a){
    if(a.age[1]=='/') a.age="0"+a.age; 
    if(a.age[4]=='/') a.age.insert(3,"0");
}
void nhapThongTinSV(SinhVien &a){
    getline(cin,a.name);
    cin>>a.classA;
    cin>>a.age;
    cin>>a.point;
}
void inThongTinSV(SinhVien &a){
    standardD(a);
    cout<<"N20DCCN001"<<" "<<a.name<<" "<<a.classA<<" "<<a.age<<" ";
    cout<<setprecision(2)<<fixed<<a.point;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}