#include <bits/stdc++.h>
using namespace std;
bool prime[10000];
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<=sqrt(10000);i++)
        for(int j=i*i;j<=10000;j+=i)
            prime[j] = false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        sieve();
        for(int i=2;i<=n/2;i++)
        {
            if(prime[i] && prime[n-i])
            {
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
}