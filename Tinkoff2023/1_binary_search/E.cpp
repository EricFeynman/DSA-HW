/** 
 *  author: eric 
 *  created: 02/21/2024  
**/  
#include <bits/stdc++.h> 
 
using namespace std; 

double f(double a, double b, double c, double d, double x) {
    return a*x*x*x + b*x*x + c*x + d;
}
 
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);   
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double l = -1000, r = 1000, m;
    while (r - l > 1e-5) {
        m = (l + r) / 2;
        if (f(a, b, c, d, m) * f(a, b, c, d, l) <= 0)
            r = m;
        else 
            l = m;
    }
    cout.precision(4);
    cout << fixed << m << '\n';
    return 0; 
}