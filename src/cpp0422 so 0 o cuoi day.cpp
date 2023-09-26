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
        for(int i=0;i<n;i++)
            if(a[i]!=0)
                cout<<a[i]<<" ";
        for(int i=0;i<n;i++)
            if(a[i]==0)
                cout<<a[i]<<" ";
        cout<<endl;
    }
}