#include<bits/stdc++.h>
using namespace std;
int m, n;

int gcd(int a, int b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

int calc(int a)
{
    int i = 1, l, r;
    while(a * i < m) ++i;
    l = i;
    while(a * i <= n) ++i;
    --i;
    r = i;
    return r - l + 1;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> m >> n >> a >> b;
        int lcm = a * b / gcd(a, b);
        cout << calc(a) + calc(b) - calc(lcm) << endl;
    }
    return 0;
}