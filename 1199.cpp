#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int n; int g[1001][1001]; int idx[1001] = {}; vector<int> c;
void dfs(int s) {
    stack<int> st; st.push(s);
    while (!st.empty()) {
        int u = st.top();
        while (idx[u]<n && g[u][idx[u]] == 0) idx[u]++;
        if (idx[u] == n) { c.push_back(u); st.pop(); }
        else { int v = idx[u]; g[u][v]--; g[v][u]--; st.push(v); }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int e(0); 
    for (int i=0; i<n; i++) { 
        int d(0); 
        for (int j=0; j<n; j++) { cin >> g[i][j]; d+=g[i][j]; } 
        if (d % 2 != 0) { cout << -1 << "\n"; return 0; }
        e += d;
    }
    e /= 2;
    dfs(0); 
    if (c.size() != e+1) { cout << -1 << "\n"; return 0; }; reverse(c.begin(), c.end());
    for (int v : c) cout << v + 1 << ' ';
    cout << "\n";
    return 0;
}
