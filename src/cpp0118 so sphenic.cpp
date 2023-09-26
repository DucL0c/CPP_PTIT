#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
    int dem=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            int dem1=0;
            while(n%i==0)
            {
                dem++;
                n/=i;
                dem1++;
            }
            if(dem1!=1)
                return 0;
        }
    }
    if(n>1) dem++;  
    if(dem==3) return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(check(n)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}