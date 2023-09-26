#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    char b[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    int t;
    cin>>t;
    while(t--){
        int m;
        char c[15];
        cin>>m;
        for(int i=0;i<15;i++)
            cin>>c[i];
        int dem=0;
        if(m==101){
            for(int i=0;i<15;i++)
                if(c[i]!=a[i])
                    dem++;
        }
        else{
            for(int i=0;i<15;i++)
                if(c[i]!=b[i])
                    dem++;
        }
        int d = 15-dem;
        double x = (double)(d*0.6666666667);
        cout<<setprecision(2)<<fixed<<x<<endl;
    }
}