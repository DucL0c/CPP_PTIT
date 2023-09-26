#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<string> a;
    getchar();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        a.insert(s);
    }
    cout<<a.size()<<endl;
}