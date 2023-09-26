#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("VANBAN.in");
    string s;
    set<string> st;
    while(fin>>s){
        for(int i=0;i<s.length();i++) s[i] = tolower(s[i]);
        st.insert(s);
    }
    for(auto x:st){
        cout<<x<<endl;
    }
}
















// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ifstream fin("VANBAN.in");
//     string s;
//     set<string> mySet;
//     while(fin >> s)
//     {
//         for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
//         mySet.insert(s);
//     }
//     for(auto i : mySet) cout << i << endl;
//     return 0;
// }
