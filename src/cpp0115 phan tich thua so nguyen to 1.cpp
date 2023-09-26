#include <bits/stdc++.h>
using namespace std;

void check(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int dem = 0;
            while(n%i==0)
            {
                n = n/i;
                dem++;
            }
            cout<<i<<" "<<dem<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        check(n);
    }
}