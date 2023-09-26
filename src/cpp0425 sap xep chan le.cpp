#include <bits/stdc++.h>
using namespace std;
// 2
// 4
// 1  2  2 1
// 5
// 1  3  2 4 5
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                cout<<a[i]<<" "<<a[n/2+i]<<" ";
            }
        }
        else{
            int i=0;
            a[n] = -1;
            while(i<=n/2){
                cout<<a[i]<<" ";
                if(a[n/2+1+i]!=-1)
                cout<<a[n/2+1+i]<<" ";
                i++;
            }
        }
        cout<<endl;
    }
}