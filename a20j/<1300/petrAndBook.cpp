#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> pages(7);

    for (int i = 0; i < 7; ++i)
    {
        cin >> pages[i];
    }
    int day = 0;

    while (n > 0)
    {
        n -= pages[day];
        if (n <= 0)
            break;
        day++;
        day %= 7;
    }
    cout << day + 1;
}