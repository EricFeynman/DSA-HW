/** 
 *  author: eric 
 *  created: 02/21/2024  
**/  
#include <bits/stdc++.h> 
 
using namespace std; 
 
int closestElement(const vector<int>& a, int x) {
    int n = a.size(); 
    if (x <= a[0])
        return 0;
    if (x >= a[n - 1])
        return n - 1;
     
    int l = -1, r = n, m = 0; 
    while (l + 1 < r) { 
        m = (l + r) / 2; 
        if (a[m] == x)  
            return m;  
        if (a[m] < x) {
            if (m < n - 1 && x < a[m + 1])
                return (x - a[m] <= a[m + 1] - x) ? m : (m + 1);
            l = m + 1;
        } else {
            if (m > 0 && x > a[m - 1])
                return (x - a[m - 1] <= a[m] - x) ? (m - 1) : m;
            r = m; 
        } 
    } 
    return m; 
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    int n, k; 
    cin >> n >> k; 
    vector<int> a(n); 
    for (int i = 0; i < n; i++) { 
        cin >> a[i]; 
    } 
    for (int i = 0; i < k; i++) { 
        int x; 
        cin >> x; 
        cout << a[closestElement(a, x)] << '\n'; 
    } 
    return 0; 
}