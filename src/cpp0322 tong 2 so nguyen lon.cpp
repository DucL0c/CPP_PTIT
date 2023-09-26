#include <bits/stdc++.h>
using namespace std;
string ans(string a,string b){
    while(a.size()<b.size()) a = "0"+a;
    while(a.size()>b.size()) b = "0"+b;
    // 198999
    // 000032
    // 199031
    int nho=0;
    string res="";
    for(int i=a.size()-1;i>=0;i--){
        int tmp = (a[i]-'0') + (b[i]-'0') + nho;
        nho = tmp/10;
        tmp = tmp%10;
        res = char(tmp+'0') + res;
    }
    if(nho>0) res = "1" + res;
    return res;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string x,y;
        cin>>x>>y;
        cout<<ans(x,y)<<endl;
    }
}