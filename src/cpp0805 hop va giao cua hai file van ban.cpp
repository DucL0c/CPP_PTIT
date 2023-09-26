#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin1("DATA1.in");
    ifstream fin2("DATA2.in");
    string s;
    set<string> hop,s1,s2,giao;
    while(fin1>>s){
        for(int i=0;i<s.length();i++) s[i] = tolower(s[i]);
        s1.insert(s);
        hop.insert(s);
    }
    while(fin2>>s){
        for(int i=0;i<s.length();i++) s[i] = tolower(s[i]);
        if(s1.find(s)!=s1.end()) giao.insert(s);
        hop.insert(s);
    }
    for(auto x:hop){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:giao){
        cout<<x<<" ";
    }
}








// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ifstream fin1("DATA1.in");
//     ifstream fin2("DATA2.in");
//     string s;
//     set<string> s1, s2, s3, s4;
//     while(fin1 >> s)
//     {
//         for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
//         s1.insert(s);
//         s3.insert(s);
//     }
//     while(fin2 >> s)
//     {
//         for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
//         if(s1.find(s) != s1.end()) s4.insert(s);
//         s3.insert(s);
//     }
//     for(auto i : s3) cout << i << ' ';
//     cout << endl;
//     for(auto i : s4) cout << i << ' ';
//     return 0;
// }