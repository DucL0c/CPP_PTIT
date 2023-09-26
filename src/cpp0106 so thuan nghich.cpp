#include <bits/stdc++.h>
using namespace std;
void checkTN(long long n)
{
    long long sum = 0;
    long long z = n;
    while(n!=0)
    {
        int d = n%10;
        sum = sum*10 + d;
        n = n/10;
    }
    if(sum==z) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        checkTN(n);
    }
}