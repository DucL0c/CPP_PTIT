#include <bits/stdc++.h>
using namespace std;
long long uc(long long n){
    int dem=0,i=1;
    while(i<=n/i){
        if(n%i==0){
            if(i%2==0) dem++; //2 4 
            if(n/i%2==0) dem++; //16 8 4
            if(n/i==i && i%2==0) dem--;
        }
        i++;
    }
    return dem;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<uc(n)<<endl;
    }
}