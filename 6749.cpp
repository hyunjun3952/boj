#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y; cin >> x >> y;
    int d = y - x;
    int c = y + d;
    cout << c << "\n";
    return 0;
}
