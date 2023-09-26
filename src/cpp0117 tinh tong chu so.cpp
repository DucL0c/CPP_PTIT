#include <bits/stdc++.h>
using namespace std;
int n;
void reduce()
{
    int a=0;
    while(n>0)
    {
        a += n%10;
        n /=10; 
    }
    n = a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n>9)
        {
            reduce();
        }
        cout<<n<<endl;
    }
}