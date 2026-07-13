#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    cin >> tc;
    vector<int> sieve(1e7);
    for (int i = 0; i < 1e7; ++i)
    {
        sieve[i] = i;
    }

    for (int i = 2; i * i < 1e7; ++i)
    {
        if (sieve[i] == i)
        {
            for (int j = i * i; j <= 1e7; j += i)
            {
                if (sieve[j] == j)
                    sieve[j] = i;
            }
        }
    }

    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        string s1 = to_string(x);
        string s2 = to_string(y);

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        vector<int> digSpace1 = {stoi(s1)}, digSpace2 = {stoi(s2)};

        while (next_permutation(s1.begin(), s1.end()))
        {
            if (s1[0] == '0')
                continue;
            digSpace1.push_back(stoi(s1));
        }
        while (next_permutation(s2.begin(), s2.end()))
        {
            if (s2[0] == '0')
                continue;
            digSpace2.push_back(stoi(s2));
        }

        vector<int> prime1, prime2;

        for (int i = 0; i < digSpace1.size(); ++i)
        {
            int num = digSpace1[i];

            while (num != 1)
            {
                prime1.push_back(sieve[num]);
                int el = sieve[num];

                while (num % el == 0)
                {
                    num /= el;
                }
            }
        }
        for (int i = 0; i < digSpace2.size(); ++i)
        {
            int num = digSpace2[i];

            while (num != 1)
            {
                prime2.push_back(sieve[num]);
                int el = sieve[num];

                while (num % el == 0)
                {
                    num /= el;
                }
            }
        }

        int ans = 1;

        sort(prime1.begin(), prime1.end());
        sort(prime2.begin(), prime2.end());

        int r1 = prime1.size() - 1, r2 = prime2.size() - 1;

        while (r1 >= 0 && r2 >= 0)
        {
            if (prime1[r1] == prime2[r2])
            {
                ans = prime1[r1];
                break;
            }
            else if (prime1[r1] > prime2[r2])
                r1--;
            else
                r2--;
        }
        cout << ans << nl;
    }
}