#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string ten;
    string birthday;
    float mon1;
    float mon2;
    float mon3;
};
void nhap(ThiSinh &A){
    getline(cin,A.ten);
    getline(cin,A.birthday);
    cin>>A.mon1;
    cin>>A.mon2;
    cin>>A.mon3;
}
void in(ThiSinh A){
    cout<<A.ten<<" ";
    cout<<A.birthday<<" ";
    float x = A.mon1+A.mon2+A.mon3;
    cout<<setprecision(1)<<fixed<<x;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
