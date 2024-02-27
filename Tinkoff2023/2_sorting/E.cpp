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
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    vector<int> a(n, 0), ans(n + 1);
    ans[0] = 1;
    for (int i = 0; i < n; i++) {
        a[p[i] - 1] = 1;
        int cnt = 0, swp = 0;
        do {
            swp = 0;
            for (int j = 1; j < n; j++) {
                if (a[j - 1] > a[j]) {
                    swap(a[j - 1], a[j]);
                    swp++;
                }
            }
            cnt++;
        } while (swp != 0)
        
        ans[i + 1] = cnt;
    }
    
    for (int i = 0; i < n + 1; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
