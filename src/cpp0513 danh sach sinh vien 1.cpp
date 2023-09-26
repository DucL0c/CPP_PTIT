#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv;
    string name;
    string clasS;
    string birthday;
    float gPA;
};
int r=0;
void nhap(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        r++;
        if(r<10) a[i].msv = "B20DCCN00" + to_string(r);
        else a[i].msv = "B20DCCN0" + to_string(r);
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].clasS>>a[i].birthday>>a[i].gPA;
        if(a[i].birthday[2]!='/') a[i].birthday = "0"+a[i].birthday;
        if(a[i].birthday[5]!='/') a[i].birthday.insert(3,"0"); 
    }
}
void in(SinhVien a[],int n){    
    for(int i=0;i<n;i++){
        cout<<a[i].msv<<" "<<a[i].name<<" "<<a[i].clasS<<" "<<a[i].birthday<<" "<<setprecision(2)<<fixed<<a[i].gPA<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}