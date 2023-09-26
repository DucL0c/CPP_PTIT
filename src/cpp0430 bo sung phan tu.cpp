#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int dem=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) continue;
            else if((a[i]+1)!=a[i+1]){
                while((a[i]+1)!=a[i+1]){
                    dem++;
                    a[i]+=1;
                }
            }
        }
        cout<<dem;
        cout<<endl;
    }
}