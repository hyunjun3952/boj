#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    for (int i=0; i<5; i++) {
        int n; cin >> n;
        v.push_back(n);
    }
    int s = accumulate(v.begin(), v.end(), 0);
    cout << s << "\n";
    return 0;
}
