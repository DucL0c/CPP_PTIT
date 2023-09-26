#include <bits/stdc++.h>
using namespace std;
void inpuT(int a[],int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void outpuT(int a[],int n,int x){
    sort(a,a+n);
    int k=0;
    for(int i=0;i<n;i++){
        if(binary_search(a,a+n,x+a[i])){
            cout<<"1"<<endl;
            k=1;
            break;
        }
    }
    if(k==0) cout<<"-1"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        inpuT(a,n);
        outpuT(a,n,x);
    }
}