#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

int main() {
    int t;
    cin>>t;
    while(t--){
        double a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        double a,b,c;
        a = double(sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2)));
        b = double(sqrt((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2)));
        c = double(sqrt((c1-a1)*(c1-a1)+(c2-a2)*(c2-a2)));
        if(a+b<=c||b+c<=a||c+a<=b)
            cout<<"INVALID"<<endl;
        else{
            double s;
            double x = (a+b+c)*(a+b-c)*(b+c-a)*(c+a-b);
            s = sqrt(x);
            double r;
            r = (a*b*c)/s;
            cout<<setprecision(3)<<fixed<<double(r*r*PI)<<endl;
        }
    }
}