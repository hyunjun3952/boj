#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while (true) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x > y) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
    return 0;
}
