#include <bits/stdc++.h>
using namespace std;
struct tg{
    long long gio,phuT,giaY;
};
void inpuT(tg &a){
        cin>>a.gio>>a.phuT>>a.giaY;
}
bool comp(tg a,tg b){
    if(a.gio>b.gio) return 0;
    if(a.gio<b.gio) return 1;
    if(a.phuT>b.phuT) return 0;
    if(a.phuT<b.phuT) return 1;
    if(a.giaY>b.giaY) return 0;
    return a.giaY<b.giaY;
}
void oupuT(tg a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i].gio<<" "<<a[i].phuT<<" "<<a[i].giaY<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    struct tg a[n];
    for(int i=0;i<n;i++)
        inpuT(a[i]);
    sort(a,a+n,comp);
    oupuT(a,n);
    return 0;
}
