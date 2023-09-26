#include <bits/stdtr1c++.h>
using namespace std;
int check(string s){
    int n = s.length();
    int res=0;
    for(int i=0;i<n;i++){
        res = res*10 + s[i]-'0';
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        int n = s.length();
        vector<string> v;
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]>=48&&s[i]<=57){
                res += s[i];
            }
            else{
                res += " ";
            }
        }
        stringstream ss(res);
        string tmp;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum += check(v[i]);
        }
        cout<<sum<<endl;
    }
}