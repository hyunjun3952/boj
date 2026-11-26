#include <iostream>
using namespace std;
long long mp(long long a, long long b, long long m) {
    long long r = 1; a %= m;
    while (b>0) {
        if (b % 2 == 1) r = r * a % m;
        a = a * a % m;
        b /= 2;
    }
    return r;
}
long long gd(long long a, long long b, long long k) {
    long long m = 1;
    for (int i=0; i<k; i++) m *= 10;
    return (mp(a, b, m) / (m / 10)) % 10;    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for (int i=0; i<t; i++) {
        int x, y; cin >> x >> y;
        int d = gd(x, y, 1);
        if (d == 0) cout << 10 << "\n";
        else cout << d << "\n";
    }
    return 0;
}
