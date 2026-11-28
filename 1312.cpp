#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, n;
    cin >> a >> b >> n;
    int r = a % b; int res = 0;
    for (int i=0; i<n; i++) {
        r *= 10;
        res = r / b;
        r %= b;
    }
    cout << res << "\n";
    return 0;
}
