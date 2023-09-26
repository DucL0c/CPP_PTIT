#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int *maX = max_element(a,a+n);
        int *miN = min_element(a,a+n);
        int x= *maX-*miN;
        vector<int> v;
        for(int i=1;i<=x;i++)
            if(x%i==0)
                v.push_back(i);
        int ok=1;
        int dem=0;
        for(int i=0;i<v.size();i++){
            int k = a[0]%v[i];
            for(int j=0;j<n;j++){
                if(a[j]%v[i]!=k){
                    ok=0;
                }
            }
            if(ok==1) dem++;
        }
        cout<<dem<<endl;
    }
}