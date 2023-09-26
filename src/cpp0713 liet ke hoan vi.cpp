#include <bits/stdc++.h>
using namespace std;
int n;
int a[100];
bool check[100];
void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(check[j]){
            a[i]=j;
            check[j] = false;
            if(i==n)
                in();
            else
                Try(i+1);
            check[j]=true;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        memset(check,true,sizeof(check));
        Try(1);
        cout<<endl;
    }
}




// #include <bits/stdc++.h>
// using namespace std;
// int n,ok=1;
// int a[100];
// void in(){
//     for(int i=1;i<=n;i++){
//         a[i] = i;
//     }
// }
// void sinh(){
//     int i=n-1;
//     while(i>=1 && a[i]>a[i+1]){
//         i--;
//     }
//     if(i==0){
//         ok=0;
//     }
//     else{
//         int k = n;
//         while(a[i]>a[k]){
//             k--;
//         }
//         swap(a[i],a[k]);
//         int l = i+1,r=n;
//         while(l<r){
//             swap(a[l],a[r]);
//             l++;
//             r--;
//         }
//     }
// }
// void out(){
//     for(int i=1;i<=n;i++){
//         cout<<a[i];
//     }
//     cout<<" ";
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         ok=1;
//         in();
//         while(ok){
//             out();
//             sinh();
//         }
//         cout<<endl;
//     }
// }






// #include <bits/stdc++.h>
// using namespace std;
// int n,ok=1;
// int a[100];
// void init(){
//     for(int i=1;i<=n;i++)
//         a[i]=i;
// }
// void sinh(){
//     int i=n-1;
//     while(i>=1 && a[i]>a[i+1]){
//         i--;
//     }
//     if(i==0){
//         ok=0;
//     }
//     else{
//         int k = n;
//         while(a[i]>a[k]){
//             k--;
//         }
//         swap(a[i],a[k]);
//         int l = i+1,r=n;
//         while(l<r){
//             swap(a[l],a[r]);
//             l++;r--;
//         }
//     }
// }
// void out(){
//     for(int i=1;i<=n;i++){
//         cout<<a[i];
//     }
//     cout<<" ";
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         ok = 1;
//         init();
//         while(ok){
//             out();
//             sinh();
//         }
//         cout<<endl;
//     }
// }