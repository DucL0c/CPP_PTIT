#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int dem=0;
        for(int i=p;i<=n;i+=p)
        {
            int res=i;
            if(res%p==0)
            {
                while(res%p==0)
                {
                    dem++;
                    res/=p;
                }
            }
        }
        cout<<dem<<endl;
    }
}