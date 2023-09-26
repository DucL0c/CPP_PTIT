#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        stringstream ss(s1);
        string tmp;
        set<string> v1;
        while(ss>>tmp){
            v1.insert(tmp);
        }
        stringstream ss1(s2);
        string temp;
        set<string> v2;
        while(ss1>>temp){
            v2.insert(temp);
            v1.insert(temp);
        }
        set<string>::iterator it;
        set<string>::iterator it1;
        for(it=v1.begin();it!=v1.end();it++){
            int d=1;
            for(it1=v2.begin();it1!=v2.end();it1++){
                if(*it==*it1){
                    d=0;
                    break;
                }
            }
            if(d==1)
                cout<<*it<<" ";
        }
        cout<<endl;
    }
}