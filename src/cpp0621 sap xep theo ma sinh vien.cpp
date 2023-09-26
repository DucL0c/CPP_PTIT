#include <bits/stdc++.h>
using namespace std;
struct sv{
    string msv,ten,lop,email;
};
bool cmp(sv &a,sv &b){
    return a.msv<b.msv;
}
sv a[10005];
int main(){
    int i=0;
    while(cin>>a[i].msv){
        cin.ignore();
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
        i++;
    }
    sort(a,a+i,cmp);
    for(int j=0;j<i;j++){
        cout<<a[j].msv<<" "<<a[j].ten<<" "<<a[j].lop<<" "<<a[j].email<<endl;
    }
}