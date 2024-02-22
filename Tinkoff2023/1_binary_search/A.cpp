/** 
 *  author: eric 
 *  created: 02/21/2024  
**/  
#include <bits/stdc++.h> 
 
using namespace std; 
 
bool binarySearch(const vector<int>& a, int x) { 
    int l = -1, r = a.size(); 
    while (l + 1 < r) { 
        int m = (l + r) / 2; 
        if (a[m] == x)  
            return true;  
        if (a[m] < x)  
            l = m; 
        else  
            r = m; 
    } 
    return false; 
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
        cout << (binarySearch(a, x) ? "YES" : "NO") << '\n'; 
    } 
    return 0; 
}
