#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int max,min;
    if(a>b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }
    for(int i=min;i<max;i++)
        if(prime(i)) 
            cout<<i<<" ";
}