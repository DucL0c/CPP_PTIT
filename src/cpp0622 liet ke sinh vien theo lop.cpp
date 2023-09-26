#include <bits/stdc++.h>
using namespace std;
struct sv{
    string msv,ten,lop,email;
};
int main(){
    int n;
    cin>>n;
    sv a[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,a[i].msv);
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
    }
    int q;
    cin>>q;
    string s;
    cin.ignore();
    for(int i=0;i<q;i++){
        getline(cin,s);
        cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
        for(int j=0;j<n;j++){
            if(a[j].lop==s){
                cout<<a[j].msv<<" "<<a[j].ten<<" "<<a[j].lop<<" "<<a[j].email<<endl;
            }
        }
    }
}