#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> sum_pairs(int t) 
{
    vector<int> a;
    for (int i=1; i <= t/2; i++) {
        int y = t - i;
        if (i < y) {
            a.push_back(i);  a.push_back(y);
        }
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        int t;
        cin >> t;
        vector<int> a(sum_pairs(t));
        cout << "Pairs for " << t << ": ";
        for (int j=0; j<a.size(); j+=2) {
            if (j>0) cout << ", ";
            cout << a[j] << " " << a[j + 1];
        }
        cout << "\n";
    }
    
    return 0;
}
