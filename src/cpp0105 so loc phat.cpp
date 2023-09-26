#include <bits/stdc++.h>
using namespace std;
void check(int n)
{
    int count=0;
    while(n!=0)
    {
        int d;
        d = n%10;
        if(d!=0 && d!=6 && d!=8)
        {
            count=1;
            break;
        }
        else
        n = n/10;
    }
    if(count==0) cout<<"YES"<<endl;
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
        check(n);
    }
}