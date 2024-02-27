/**
 *  author: eric
 *  created: 02/26/24
**/ 
#include <bits/stdc++.h>

using namespace std;

long long merge(vector<int>& a, int l, int m, int r) {
    int i = l, j = m, k = 0;
    long long ans = 0;
    vector<int> tmp(r - l + 1);
    while (i < m && j <= r) {
        if (a[i] <= a[j]) {
            tmp[k++] = a[i++];
        } else {
            tmp[k++] = a[j++];
            ans += m - i;
        }
    }
    
    while (i < m) {
        tmp[k++] = a[i++];
    }
    
    while (j <= r) {
        tmp[k++] = a[j++];
    }
    
    for (int i = l, k = 0; i <= r; i++, k++) {
        a[i] = tmp[k];
    }
    
    return ans;
    
}

long long mergeSort(vector<int>& a, int l, int r) {
    long long ans = 0;
    if (r > l) {
        int m = (l + r) / 2;
        ans += mergeSort(a, l, m);
        ans += mergeSort(a, m + 1, r);
        ans += merge(a, l, m + 1, r);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans = mergeSort(a, 0, n - 1);
    
    cout << ans << '\n';
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
