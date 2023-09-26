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
    int t;
    cin>>t;
    string s;
    cin.ignore();
    for(int j=0;j<t;j++){
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            s[i] = toupper(s[i]);
        }
        cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
        for(int i=0;i<n;i++){
            if(a[i].lop[0] == 'E' && (a[i].msv[5]=='A' || a[i].msv[5]=='C')){
                    continue;
            }
            if(a[i].msv[5]==s[0]){
                    cout<<a[i].msv<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].email<<endl;
            }
        }
    }
}