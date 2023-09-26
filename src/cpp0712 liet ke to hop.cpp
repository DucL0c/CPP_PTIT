// #include <bits/stdc++.h>
// using namespace std;
// int n,k,ok = 1;
// int a[100];
// void in(){
//     for(int i=1;i<=k;i++)
//         a[i] = i;
// }
// void sinh(){
//     int i = k;
//     while(i>=1 && a[i]==(n-k+i)){
//         i--;
//     }
//     if(i==0){
//         ok = 0;
//     }
//     else{
//         a[i]++;
//         for(int j=i+1;j<=k;j++){
//             a[j] = a[j-1]+1;
//         }
//     }
// }
// void out(){
//     for(int i=1;i<=k;i++)
//         cout<<a[i];
//     cout<<" ";
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         in();
//         ok = 1;
//         while(ok){
//             out();
//             sinh();
//         }
//         cout<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
void in(){
    for(int i=1;i<=k;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i] = j;
        if(i==k){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    cin>>n>>k;
    a[0]=0;
    Try(1);
}












// #include <bits/stdc++.h>
// using namespace std;
// int n,k,ok=1;
// int a[100];
// void init(){
//     for(int i=1;i<=k;i++)
//         a[i]=i;
// }
// void sinh(){
//     int i=k;
//     while(i>=1 && a[i]==(n-k+i)){
//         i--;
//     }
//     if(i==0){
//         ok = 0;
//     }
//     else{
//         a[i]++;
//         for(int j=i+1;j<=k;j++){
//             a[j] = a[j-1]+1;
//         }
//     }
// }
// void out(){
//     for(int i=1;i<=k;i++)
//         cout<<a[i];
//     cout<<" ";
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         ok = 1;
//         init();
//         while(ok){
//             out();
//             sinh();
//         }
//         cout<<endl;
//     }
// }