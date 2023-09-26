#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
    if(n==0||n==1) return 1;
    long long a=0,b=1;
    long long c;
    c = a+b;
    while(c<=n)
    {
        if(c==n) return 1;
        else
        {
            a = b;
            b = c;
            c = a+b;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}