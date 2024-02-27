/**
 *  author: eric 
 *  created: 02/27/24
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        while (!dq.empty() && a[dq.back()] >= a[i])
            dq.pop_back();
        dq.push_back(i);
        
        if (i >= k - 1) {
            while (!dq.empty() && dq.front() <= i - k) 
                dq.pop_front();
            cout << a[dq.front()] << " ";
        }
    }
    return 0;
}
