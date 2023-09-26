#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int maX = 0;
        for(int i=0;i<n-1;i++){
            int j = n-1;
            while(i<j){
                if(a[i]<a[j]){
                    maX = max(maX,j-i);
                    break;
                }
                else j--;
            }
        }
        cout<<maX<<endl;
    }
}