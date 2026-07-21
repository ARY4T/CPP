#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define nl "\n"
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin >> tc;
    while (tc--) {
        ll n, a, b;
        cin >> n >> a >> b;
        
        ll g = (n / 3) * b + min((n % 3) * a, b);
    
        ll i = n * a;
    
        cout << min(g, i) << nl;
    }
}