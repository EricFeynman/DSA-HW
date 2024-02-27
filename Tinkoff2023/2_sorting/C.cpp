/**
 *  author: eric 
 *  created: 02/26/24
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<string> s;
    string l;
    while (getline(cin, l)) {
        if (!l.empty()) {
            s.push_back(l);
        }
    }
    
    sort(s.begin(), s.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });
    
    for (const auto& w : s) {
        cout << w;
    }
    return 0;
}
