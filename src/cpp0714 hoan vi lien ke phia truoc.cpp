#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        //cin>>n;
        n=3;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(prev_permutation(a,a+n))
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
        cout<<endl;
    }
}