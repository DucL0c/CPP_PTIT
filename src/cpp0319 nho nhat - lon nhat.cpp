#include <bits/stdc++.h>
using namespace std;
void solve(int m,int s){
    int tmp = s;
    if(s==0||s>9*m){
        cout<<"-1"<<" "<<"-1";
        return;
    }
    long long lon[m],nho[m];
    for(int i=0;i<m;i++){
        if(s>9){
            lon[i] = 9;
            s -= 9;
        }
        else{
            lon[i] = s;
            s = 0;
        }
    }
    tmp-=1;
    for(int i=m-1;i>0;i--){
        if(tmp>9){
            nho[i] = 9;
            tmp-=9;
        }
        else{
            nho[i]= tmp;
            tmp = 0;
        }
    }
    nho[0] = tmp+1;
    for(int i=0;i<m;i++)
        cout<<nho[i];
    cout<<" ";
    for(int i=0;i<m;i++)
        cout<<lon[i];
}
int main(){
    int m,s;
    cin>>m>>s;
    solve(m,s);
}