#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string x; cin >> oct >> x;
    if (x == "0") {cout << "0" << "\n"; return 0;}
    const string t[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string f = t[x[0] - '0'];
    cout << f.substr(f.find('1'));
    for (size_t i=1; i<x.size();++i) cout << t[x[i] - '0'];
    cout << "\n";
    return 0;
}
