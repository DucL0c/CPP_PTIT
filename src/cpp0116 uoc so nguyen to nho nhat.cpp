#include <bits/stdc++.h>
using namespace std;
void check(int n)
{
    int a[n];
    for(int i=1;i<=n;i++)
        a[i] = i;
    for(int i=2;i<=sqrt(n);i++)
        if(a[i]==i)
            for(int j=i*i;j<=n;j+=i)
                if(a[j]==j)
                    a[j] = i;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        check(n);
        cout<<endl;
    }
}