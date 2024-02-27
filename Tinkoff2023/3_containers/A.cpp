/**
 *  author: eric 
 *  created: 02/27/24
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    stack<int> a;
    string s;
    while (cin >> s) {
        if (isdigit(s[0]) || (s.length() > 1 && s[0] == '-')) {
            a.push(stoi(s));
        } else {
            int r = a.top();
            a.pop();
            int l = a.top();
            a.pop();
            switch (s[0]) {
                case '+':
                    a.push(l + r);
                    break;
                case '-':
                    a.push(l - r);
                    break;
                case '*':
                    a.push(l * r);
                    break;
            }
        }
    }
    cout << a.top() << '\n';
    return 0;
}
