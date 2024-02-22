/** 
 *  author: eric 
 *  created: 02/21/2024  
**/  
#include <bits/stdc++.h> 
 
using namespace std; 

double f(double x) {
    return x*x + sqrt(x + 1);
}
 
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);   
    double C;
    cin >> C;
    double l = -1, r = C, m;
    while (r - l > 1e-7) {
        m = (l + r) / 2;
        if (f(m) < C)
            l = m;
        else 
            r = m;
    }
    cout.precision(12);
    cout << m << '\n';
    return 0; 
}