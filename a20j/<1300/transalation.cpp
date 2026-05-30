#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;

    cin >> s;
    string t;
    cin>>t;

    int i = 0, j = s.size() - 1;

    while (i < j)
    {
        swap(s[i++], s[j--]);
    }

    if (t == s)
        cout << "YES";
    else
        cout << "NO";
}