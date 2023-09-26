#include <bits/stdc++.h>
using namespace std;
void check(long long n)
{
    int c;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n = n/i;
                c = i;
            }
        }
    }
    if(n!=1) cout<<n<<endl;
    else cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        check(n);
    }
}