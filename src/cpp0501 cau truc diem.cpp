#include <bits/stdc++.h>
using namespace std;
struct Point{
     double x, y;
};
void input(Point &A)
{
    cin>>A.x;
    cin>>A.y;
}
double distance(Point A,Point B)
{
    return sqrt(pow((B.x-A.x),2)+pow((B.y-A.y),2));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}