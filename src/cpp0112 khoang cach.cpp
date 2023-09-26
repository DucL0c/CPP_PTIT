#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double e = c-a;
        double f = d-b;
        double g = sqrt(e*e+f*f);
        cout<<setprecision(4)<<fixed<<g<<endl;;
    }
}