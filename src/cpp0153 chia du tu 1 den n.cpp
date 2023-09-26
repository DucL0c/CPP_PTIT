#include <bits/stdc++.h>
using namespace std;
long long solve(int n,long long k){
    int p = n/k;
    long long res;
    if(n<k){
        return 1LL*n*(n+1)/2;
    }
    else{
        res = 1LL*p*(k*(k-1)/2);
        int x = n/k;
        res += (x*(x+1))/2;
        return res;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
        // int s = 0;
        // for(int i=1;i<=n;i++)
        // {
        //     s += i%k;
        // }
        // cout<<s<<endl;
    }
}