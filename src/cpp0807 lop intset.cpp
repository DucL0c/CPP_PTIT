#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("DATA.in");
    int n,m;
    fin>>n>>m;
    int a[n],b[m];
    set<int> s1,s2,hop;
    for(int i=0;i<n;i++){
        fin>>a[i];
        s1.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        fin>>b[i];
        if(s1.find(b[i])!=s1.end()){
            hop.insert(b[i]);
        }
    }
    for(int x:hop){
        cout<<x<<" ";
    }
}








// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ifstream fin("DATA.in");
//     int n, m, x;
//     fin >> n >> m;
//     set<int> s;
//     unordered_map<int, int> um1;
//     while(n--)
//     {
//         fin >> x;
//         ++um1[x];
//     }
//     while(m--)
//     {
//         fin >> x;
//         if(um1[x]) s.insert(x);
//     }
//     for(int i : s) cout << i << ' ';
//     return 0;
// }