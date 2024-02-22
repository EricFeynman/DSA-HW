/** 
 *  author: eric 
 *  created: 02/21/2024  
**/  
#include <bits/stdc++.h> 
 
using namespace std; 
 
int main() {  
    int n; 
    cin >> n; 
    int l = -1, r = n;
    while (l + 1 < r) {
        int m = (l + r) / 2;
        cout << m << '\n';
        fflush(stdout);
        string s;
        cin >> s;
        if (s == "<")
            r = m;
        else
            l = m;
    }
    cout << "! " << l << '\n';
    fflush(stdout);
    return 0; 
}