#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        cin>>s;
        int b[100000]={0};
        for(int i=0;i<s.length();i++){
            b[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(b[s[i]]==1)
                cout<<s[i];
        }
        cout<<endl;
    }
}