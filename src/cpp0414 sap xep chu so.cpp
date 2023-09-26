#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int j=0;
        int b[1000];
        int c[1000]={0};
        for(int i=0;i<n;i++){
            while(a[i]!=0){
                b[j] = a[i]%10;
                c[b[j]]++;
                a[i]/=10;
                j++;
            }
        }
        sort(b,b+j);
        for(int i=0;i<j;i++){
            if(c[b[i]]!=0){
                cout<<b[i]<<" ";
            }
            c[b[i]]=0;
        }
        cout<<endl;
    }
}