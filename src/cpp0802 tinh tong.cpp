#include<bits/stdc++.h>
using namespace std;
int calc(string &s)
{
    if(s.length() > 9) return 0;
    long long n = 0;
    for(int i=0;i<s.length();i++)
    {
        if(!isdigit(s[i])) return 0;
        n = n * 10 + s[i] - '0';
    }
    if(n <= 2147483647) return (int) n;
    return 0;
}

int main()
{
    ifstream fin;
    fin.open("DATA.in",ios::in);
    string s;
    long long sum = 0;
    while(fin >> s) sum += calc(s);
    cout << sum;
    fin.close();
    return 0;
}
