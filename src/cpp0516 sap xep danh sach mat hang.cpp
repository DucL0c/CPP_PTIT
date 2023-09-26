#include <bits/stdc++.h>
using namespace std;
struct hangHoa{
    string tmh,nh;
    double gm,gb;
    int mmh;
};
bool comp(hangHoa a,hangHoa b){
    return double(a.gb-a.gm)>double(b.gb-b.gm);
}
int main(){
    struct hangHoa a[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        a[i].mmh = i+1;
        cin.ignore();
        getline(cin,a[i].tmh);
        getline(cin,a[i].nh);
        cin>>a[i].gm>>a[i].gb;
    }
    sort(a,a+n,comp);
    for(int i=0;i<n;i++){
        cout<<a[i].mmh<<" "<<a[i].tmh<<" "<<a[i].nh<<" "<<setprecision(2)<<fixed<<double(a[i].gb-a[i].gm)<<endl;
    }
}