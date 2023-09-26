#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,Q;
        cin>>n>>Q;
        int a[n];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int l,r;
        while(Q--)
        {
            cin>>l>>r;
            int s=0;
            for(int i=l;i<=r;i++)
                s+=a[i];
            cout<<s<<endl;
        }

    }
}