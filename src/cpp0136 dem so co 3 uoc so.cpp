#include <bits/stdc++.h>
using namespace std;
bool prime[10000000];
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0] = false;
    prime[1] = false;
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
        long long n;
        cin>>n;
        int dem=0;
        for(int i=1;i<=sqrt(n);i++)
            if(prime[i]) 
                dem++;
        cout<<dem<<endl;
    }
}