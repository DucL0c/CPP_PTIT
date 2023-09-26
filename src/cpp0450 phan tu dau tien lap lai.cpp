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
        int min = 1000000;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    if(j<min){
                        min = j;
                    }
                }
            }
        }
        if(min==1000000) cout<<"-1"<<endl;
        else cout<<a[min]<<endl;
    }
}