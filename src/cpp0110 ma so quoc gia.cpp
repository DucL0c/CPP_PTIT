#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int res = str.find("084");
        string s = str.erase(res,3);
        cout<<s<<endl;
    }
}