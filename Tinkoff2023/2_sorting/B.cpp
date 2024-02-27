/**
 *  author: eric
 *  created: 02/26/24
**/ 
#include <bits/stdc++.h>

using namespace std;

void antiQsort(vector<int>& a, int l, int r) {
    if (l >= r)
        return;
    int m = (l + r) / 2;
    swap(a[m], a[l]);
    if (r - l > 1) {
        if ((r - l) % 2 == 0)
            m--;
        swap(a[m], a[r]);
    }
    antiQsort(a, l + 1, r - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    
    antiQsort(a, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
