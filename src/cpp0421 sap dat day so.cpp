#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            int dem=0;
            for(int j=0;j<n;j++){
                if(a[j]==i){
                    dem=1;
                    break;
                }
            }
            if(dem==1) cout<<i<<" ";
            else cout<<"-1"<<" ";
        }
        cout<<endl;
    }
}