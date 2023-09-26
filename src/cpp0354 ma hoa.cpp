#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        int n = s.length();
        for(int i=0;i<n;i++){
            int dem=1;
            if(s[i]!='0'){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                        dem++;
                        s[j]='0';
                    }
                }
                cout<<s[i]<<dem;
            }
        }
        cout<<endl;
    }
}