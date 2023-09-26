#include <bits/stdc++.h>
using namespace std;
string ans(string x,string y){
    while(x.size()<y.size()) x ="0"+x;
    while(x.size()>y.size()) y ="0"+y;
    if(x<y) x.swap(y);
    int nho=0;
    string res="";
    for(int i=x.size()-1;i>=0;i--){
        int so = (x[i]-'0')-(y[i]-'0') - nho;
        if(so<0){
            res = char(so+10+'0') + res;
            nho = 1;
        }
        else{
            res = char(so+'0') + res;
            nho = 0;
        }
    }
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