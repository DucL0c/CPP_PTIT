#include <bits/stdc++.h>
using namespace std;
long long prime(long long n)
{
    if(n < 2) return 0;
    double sqr = sqrt(n);
    for(int i = 2; i <= sqr; ++i) if(n % i == 0) return 0;
    return 1;
}
long long check(long long n){
    int a = n%10;
    n/=10;
    while(n!=0){
        int d = n%10;
        n = n/10;
        if(a<=d) return 0;
        a = d;
    }
    return 1;
}
long long check2(long long n){
    int a = n%10;
    n/=10;
    while(n!=0){
        int d = n%10;
        n = n/10;
        if(d<=a) return 0;
        a = d;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min = pow(10,n-1);
        long long max = pow(10,n);
        int dem=0;
        for(long long i=min;i<max;i++){
            if(check(i)||check2(i))
                if(prime(i))
                    dem++;
        }
        cout<<dem<<endl;
    }
}
