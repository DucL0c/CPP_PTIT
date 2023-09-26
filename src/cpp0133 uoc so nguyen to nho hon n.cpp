#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<=sqrt(n);i++)
        for(int j=i*i;j<=n;j+=i)
            prime[j] = false;
    for(int i=2;i<=n;i++)
        if(prime[i])
            cout<<i<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        sieve(n);
        cout<<endl;
    }
}