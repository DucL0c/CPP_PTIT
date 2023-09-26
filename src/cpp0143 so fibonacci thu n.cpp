#include <bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    long long f[100];
    if(n<2) cout<<"1"<<endl;
    else
    {
        f[1] = 1;
        f[2] = 1;
        for(int i=3;i<=n;i++)
        {
            f[i] = f[i-1]+f[i-2];
        }
    }
    cout<<f[n]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        fibonacci(n);
    }
}