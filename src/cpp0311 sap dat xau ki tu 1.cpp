#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int b[1000]={0};
        int n = s.length();
        for(int i=0;i<n;i++)
            b[s[i]]++;
        int d=1;
        if(n%2==0){
            for(int i=0;i<n;i++)
                if(b[s[i]]>n/2)
                    d=0;
        }
        else{
            for(int i=0;i<n;i++)
                if(b[s[i]]>(n/2+1))
                    d=0;
        }
        cout<<d<<endl;
    }
}