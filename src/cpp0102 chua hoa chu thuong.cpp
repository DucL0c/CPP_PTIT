#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char a;
        cin>>a;
        if(a-'\0'>=65 && a-'\0'<=90)
        {
            a = a+32;
            cout<<a<<endl;
        }
        else
        {
            a = a-32;
            cout<<a<<endl;
        }
    }
}