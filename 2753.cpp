#include <iostream>
using namespace std;
bool is_leaf(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int y;
    cin >> y;
    cout << is_leaf(y) << "\n";
    return 0;
}
