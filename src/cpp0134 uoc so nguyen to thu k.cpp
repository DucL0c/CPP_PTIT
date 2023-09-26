#include <bits/stdc++.h>
using namespace std;
void checkNT(int n,int k)
{
    int dem=0,c;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                dem++;
                if(dem==k) c = i;
                n = n/i;
            }
        }
    }
    if(dem<k) cout<<"-1"<<endl;
    else cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        checkNT(n,k);
    }
}