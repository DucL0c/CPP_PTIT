#include <bits/stdc++.h>
using namespace std;

int main(){
    char c=' ';
    int a[10000];
    int b[1000]={0};
    int i=0;
    while(c!='\n'){
        cin>>a[i];
        b[a[i]]++;
        c = getchar();
        i++;
    }
    for(int j=0;j<i;j++){
        if(b[a[j]]!=0){
            cout<<a[j]<<" "<<b[a[j]]<<endl;
            b[a[j]]=0;
        }
    }
}