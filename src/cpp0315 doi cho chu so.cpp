#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'

bool check(string &s)
{
    for(int i = 1; i < s.length(); ++i) if (s[i] < s[i-1]) return 1;
    return 0;
}

bool check0(string &s)
{
    return s[0] != '0';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(!check(s))
        {
            cout << -1 << endl;
            continue;
        }
        int index = s.length() - 1;//index = 5;
        for(int i=s.length() - 1;i>=1;i--)//421423 -> 421342
        {
            if(s[i - 1] > s[i])
            {
                index = i;//i=4
                break;
            }
        }
        int move = index;//move = 4
        char maxx = s[index];//max= 2
        for(int i=index + 1;i<=s.length() - 1;i++)
        {
            if (s[i] > maxx && s[i] < s[index-1])
            {
                move = i; // move  = 5
                maxx = s[i]; //max = 3
            }
        }
        swap(s[index - 1], s[move]);
        if (!check0(s)) cout << -1 << endl;
        else cout << s << endl;
    }
    return 0;
}