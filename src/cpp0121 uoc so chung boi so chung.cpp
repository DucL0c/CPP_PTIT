#include <bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    if(a==0||b==0) return a+b;
    while(a!=b)
    {
        if(a>b) a = a-b;
        else   b = b-a;
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        cout<<a*b/lcm(a,b)<<" "<<lcm(a,b);
        cout<<endl;
    }
}