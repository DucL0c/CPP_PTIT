#include <bits/stdc++.h>
using namespace std;
struct sv{
    string msv,ten,lop,email;
};
int main(){
    int n;
    cin>>n;
    cin.ignore();
    sv a[n];
    for(int i=0;i<n;i++){
        getline(cin,a[i].msv);
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
    }
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int x = s.length();
        cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
        for(int j=0;j<n;j++){
            if(a[j].lop[1] == s[x-2] && a[j].lop[2]==s[x-1]){
                cout<<a[j].msv<<" "<<a[j].ten<<" "<<a[j].lop<<" "<<a[j].email<<endl;
            }
        }
    }
}