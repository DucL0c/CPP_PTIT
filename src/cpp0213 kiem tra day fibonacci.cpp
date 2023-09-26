#include <bits/stdc++.h>
using namespace std;
int check(int y)
{
    if(y==0||y==1) return 1;
    int a=0,b=1,c;
    c = a+b;
    while(c<=y)
    {
        if(c==y) return 1;
        else
        {
            a = b;
            b = c;
            c = a+b;
        }
    }
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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            if(check(a[i]))
                cout<<a[i]<<" ";
        cout<<endl;
    }
}