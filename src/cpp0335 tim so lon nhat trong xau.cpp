#include <bits/stdc++.h>
using namespace std;
int check(string s){
    int n = s.length();
    int sum=0;
    for(int i=0;i<n;i++)
        sum = sum*10 + s[i]-'0';
    return sum;
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        vector<string> v;
        int n = s.length();
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
        int max = check(v[0]);
        for(int i=1;i<v.size();i++)
            if(check(v[i])>max)
                max = check(v[i]);
        cout<<max<<endl;
    }
}