#include <iostream>
#include <string>
using namespace std;
string is_even_or_odd(int x) {
    return x % 2 == 0 ? "even" : "odd";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    int i = 0;
    while (true) {
        i++;
        int n0;
        cin >> n0;
        if (n0 == 0) break;
        n1 = 3*n0;
        n2 = is_even_or_odd(n1) == "even" ? n2 = n1/2 : n2 = (n1+1)/2;
        n3 = 3*n2;
        n4 = n3 / 9;
        n0 = is_even_or_odd(n1) == "even" ? n0 = 2*n4 : n0 = 2*n4+1;
        cout << i << ". " << is_even_or_odd(n1) << " " << n4 << "\n";
    }
    
    return 0;
}
