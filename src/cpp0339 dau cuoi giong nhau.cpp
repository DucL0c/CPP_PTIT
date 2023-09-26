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
        int dem=n;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    dem++;
                }
            }
        }
        cout<<dem<<endl;
    }
}