#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n<=10 && n>0)
    {
        long long a;
        cin>>a;
        long long sum=0;
            sum = (a+1)*a/2;
        cout<<sum<<endl;
        n--;
    }
    return 0;
}