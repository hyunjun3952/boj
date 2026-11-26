#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    int mn = 1000001; int mx = 0;
    for (int i=0; i<t; i++) { int x; cin >> x; mn = min(mn, x); mx = max(mx, x); }
    cout << mn * mx << "\n";
    return 0;
}
