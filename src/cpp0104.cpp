#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        long long t = 1;
        for(int j=1;j<=i;j++)
        {
            t = t*j;
        }
        sum = sum + t;
    }
    cout<<sum;
}