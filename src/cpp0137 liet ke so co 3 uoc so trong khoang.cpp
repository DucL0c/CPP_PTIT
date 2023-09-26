#include <bits/stdc++.h>
using namespace std;
bool prime[10000000];
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<=sqrt(10000000);i++)
        for(int j=i*i;j<=10000000;j+=i)
            prime[j] = false;
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        long long x = sqrt(l);
        if(x*x!=l) x = x+1;
        long long y = sqrt(r);
        int dem=0;
        for(int i=x;i<=y;i++)
            if(prime[i]) 
                dem++;
        cout<<dem<<endl;
    }
}