#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> x{a, b, c};
    sort(x.begin(), x.end());
    for (int v : x) cout << v << " ";
    return 0;
}
