#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    ll avg = 0;
    ll sum = 0;

    for (int i = 0; i < k; ++i)
    {   
        sum += v[i];
        avg += v[i];
    }

    int count = 1;

    int weeks = n - k + 1;
    int left = 0, right = k;

    for (int i = 1; i < weeks; ++i)
    {
        sum -= v[left++];
        sum += v[right++];

        avg += sum;
    }
    cout << fixed << setprecision(10);
    cout << (double)avg / weeks;
}