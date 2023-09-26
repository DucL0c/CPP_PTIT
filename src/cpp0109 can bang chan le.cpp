#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
    int demchan=0,demle=0;
    while(n!=0)
    {
        int d = n%10;
        if(d%2==0) demchan++;
        else demle++;
        n /= 10;
    }
    if(demchan==demle) return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int min = pow(10,n-1);
    int max = pow(10,n);
    int dem=0;
    for(int i=min;i<max;i++)
    {
        if(check(i))
        {
            cout<<i<<" ";
            dem++;
        }
        if(dem%10==0) cout<<endl;
    }
}