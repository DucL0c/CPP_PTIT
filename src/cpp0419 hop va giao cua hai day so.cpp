#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        set<int> hop,s1,s2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            hop.insert(a[i]);
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            hop.insert(b[i]);
            s2.insert(b[i]);
        }
        for(auto x:hop) 
            cout<<x<<" ";
        cout<<endl;
        for(auto x:s1)
            if(s2.find(x)!=s2.end())
                cout<<x<<" ";
        cout<<endl;
    }
}