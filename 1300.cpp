#include <iostream>
using namespace std;
int c(int n, int x) {
    int cnt = 0; for (int i = 1; i<n+1; i++) cnt += min(n, x / i);
    return cnt;
}
int f(int n, int k) {
    int l = 1, r = k;
    while (l <= r) {
        int m = (l + r) / 2;
        if (c(n, m) >= k) r = m -1; else l = m + 1;
    }
    return l;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    cout << f(n, k) << "\n";
    return 0;
}
