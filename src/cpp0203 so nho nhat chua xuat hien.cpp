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
        int d = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
                d=1;
        }
        sort(a,a+n);
        int x;
        if(d==0){
            cout<<"1"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]<0)
                    continue;
                else if(a[i]==a[i+1])
                    continue;
                else{
                    if(a[i]+1!=a[i+1]){
                        x = a[i]+1;
                        break;
                    }
                }   
            }
            cout<<x<<endl;
        }
    }
}