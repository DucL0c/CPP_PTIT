#include <bits/stdc++.h>
using namespace std;
int prime(int x)
{
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
            return 0;
    return 1;
}
vector<long long> res;
void init()
{
    for(int i=2;i<=32;i++)
    {
        if(prime(i))
        {
            long long x = pow(2,i);
            if(prime(x-1))
            {
                long long h = x/2*(x-1);
                res.push_back(h);
            }
        }
    }
}
int main()
{
    init();
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int dem=0;
        for(int i=0;i<res.size();i++)
            if(res[i]==n)
                dem++;
        if(dem==0) cout<<"0"<<endl;
        else  cout<<"1"<<endl;

    }
}