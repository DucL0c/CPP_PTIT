#include<bits/stdc++.h>
using namespace std;
void lower(string &s){
    int n=s.length();
    for(int i=0;i<n;i++)
        s[i] = tolower(s[i]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        getchar();
        string s;
        getline(cin,s);
        lower(s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        int c = v.size();
        for(int i=0;i<v.size();i++){
            v[i][0] = toupper(v[i][0]);
        }
        if(n==1){
            cout<<v[c-1]<<" ";
            for(int i=0;i<c-1;i++)
                cout<<v[i]<<" ";
        }
        else if(n==2){
            for(int i=1;i<c;i++)
                cout<<v[i]<<" ";
            cout<<v[0];
        }
        cout<<endl;
    }
}