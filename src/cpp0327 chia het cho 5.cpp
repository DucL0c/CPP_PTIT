#include <bits/stdc++.h>
using namespace std;
//10000101001
bool check(string s){
    int n=s.length();
    int r[4]={2,4,3,1}; // 0 1 2 3
    int sum=0,cnt=0;
    if(s[n-1]=='1'){
        sum = 1;
    }
    for(int i=n-2;i>=0;i--){
        if(s[i]=='1')
            sum += r[cnt];
        cnt++; 
        sum%=5;
        cnt%=4; 
    }
    if(sum%5==0)
        return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s))
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
}

















// #include<bits/stdc++.h>
// using namespace std;
// bool check(string &s) //1010
// {
//     long long res = 0, n = s.length()-1, tmp = 1;//2 6 12 
//     for(int i=n;i>=0;i--)//res =  2  
//     {
//         if(s[i] == '1')  //0 1 0 1
//         {
//             tmp %= 5;    //  3    2
//             res += tmp;  //  3    4
//             res %= 5;
//         }
//         tmp *= 2; 
//     }
//     return res;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         if(!check(s)) cout << "Yes" << endl;
//         else cout << "No" << endl;
//     }
//     return 0;
// }