#include <bits/stdc++.h>
using namespace std;
long long a[100005];

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
		for(int i=0;i<n;i++) cin >> a[i];
		if(n == 1) cout << a[0] << endl;
		else if(n==2) cout << max(a[0], a[1]) << endl;
		else
        {
			long long tmp, tmp1 = a[0], tmp2 = a[1], tmp3 = a[0] + a[2];
			for(int i=3;i<n;i++)
            {
				tmp = a[i];    // tmp 
				if(tmp1 > tmp2) tmp += tmp1;  //tmp = 100 + 5  
				else tmp += tmp2;             // tmp = 10 + 5 + 10     
				tmp1 = tmp2;    // tmp1 = 5   
                tmp2 = tmp3;    // tmp2 = 5+10 
                tmp3 = tmp;     // tmp3 = 100+5
			}
			cout << max(tmp2, tmp3) << endl;
		}
    } 
    return 0;
}
// 2
// 6
// 5  5  10  100  10  5