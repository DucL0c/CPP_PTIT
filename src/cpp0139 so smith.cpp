#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int res = 0;
    while(n!=0)
    {
        res+=n%10;
        n/=10;
    }
    return res;
}
int smith(int n)
{
    int sum1=0;int tmp=n;
    int sum2=sum(n);
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            int x = sum(i);
            while(n%i==0)
            {
                n/=i;
                sum1+=x;
            }
        }
    }
    if(n>1)
    {
        if(n==tmp) return 0;
        else
            sum1+=sum(n);
    }
    if(sum1==sum2) return 1;
    else return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(smith(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}