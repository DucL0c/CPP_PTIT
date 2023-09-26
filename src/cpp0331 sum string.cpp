#include <bits/stdc++.h>
using namespace std;
int toNum(char s){
    return s-'0';
}
string bigSum(string s1,string s2){
    string res="";
    int c=0;
    int len1 = s1.length();
    int len2 = s2.length();
    if(s1.length()<s2.length())
        swap(s1,s2);
    for(int i=0;i<s2.length();i++){
        int x = toNum(s1[len1-i-1]) + toNum(s2[len2-i-1]) + c;
        res = char(x%10+'0')  + res;
        c = x/10;
    }
    for(int i=len2;i<len1;i++){
        int x = toNum(s1[len1-i-1])+c;
        res = char(x%10+'0') + res;
        c = x/10;
    }
    if(c)   res = char(c+'0') + res;
    return res; 
}
bool sumString(string s,int start,int len1,int len2){
    string s1=s.substr(start,len1);
    string s2=s.substr(start+len1,len2);
    string s3=bigSum(s1,s2);
    int len3 = s3.length();
    if(s3.length()>s.length()-len1-len2-start)
        return false;
    if(s3 == s.substr(start+len1+len2,len3)){
        if(start + len1 + len2 + len3 == s.length()) 
            return true;
        return sumString(s,start+len1,len2,len3);
    }
    return false;
}
//112233
// 12345
// 1 2          12 3
// 1 23         12 34  
// 1 234        12 345
// 1 2345
bool check(string s){
    int len=s.length();
    for(int i=1;i<len;i++)
        for(int j=1;j<len-i;j++)
            if(sumString(s,0,i,j))
                return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}