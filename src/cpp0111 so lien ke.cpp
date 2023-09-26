#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int t = n%10;
        n = n/10;
        int dem=1;
        while(n!=0)
        {
            int a = n%10;
            if(t!=a+1&&t!=a-1)
                dem=0;
            t = a;
            n=n/10;
        }
        if(dem==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}