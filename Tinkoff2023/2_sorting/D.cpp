/**
 *  author: eric 
 *  created: 02/26/24
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    map<char, int> a;
    for (char c : s) {
        a[c]++;
    }
    
    string l, m;
    for (auto &[c, t] : a) {
        l += string(t / 2, c);
        if (t % 2 && m.empty()) {
            m = c;
        }
    }
    
    string r = l;
    reverse(r.begin(), r.end());
    cout << l + m + r << '\n';
    return 0;
}
